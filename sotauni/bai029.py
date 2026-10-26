'''
Quản lý phòng trò chơi
Mô tả câu hỏi
Câu hỏi này yêu cầu viết một hàm do người dùng định nghĩa để hoàn thành nhiệm vụ.

Ông Min, Giám đốc điều hành, quản lý một phòng trò chơi dựa trên đặt chỗ trước trường học.

Để quản lý phòng trò chơi một cách hiệu quả, Giám đốc Min đặt mục tiêu tạo ra một chương trình giảm thiểu số lượng phòng cần thiết dựa trên các khoảng thời gian đặt chỗ của các đội đã đặt.

Mỗi phòng cần 20 phút thời gian dọn dẹp sau khi sử dụng.

Ví dụ
Ví dụ, với 2 đội đặt chỗ:

Trong kịch bản đầu tiên, nếu đội đầu tiên đặt chỗ từ 9:00 AM đến 10:10 AM và đội thứ hai từ 10:30 AM đến 11:30 AM, vì không có sự chồng chéo khi xem xét thời gian dọn dẹp, chỉ cần 1 phòng.
Trong kịch bản thứ hai, nếu đội đầu tiên đặt chỗ từ 9:00 AM đến 10:10 AM và đội thứ hai từ 10:00 AM đến 11:30 AM, vì có sự chồng chéo, nên cần 2 phòng.
Hàm do người dùng định nghĩa có tên là solution nên trả về số lượng phòng cần thiết dựa trên thời gian bắt đầu và kết thúc của các khách hàng đã đặt chỗ.

Tham số
Thời gian như 10:10 sẽ được nhập dưới dạng chuỗi theo định dạng "10:10".

Thời gian bắt đầu và kết thúc đặt chỗ cho N đội sẽ được nhập dưới dạng danh sách hai chiều như ["15:00", "17:00"].

Kiểu trả về
Hàm trả về số lượng phòng cần thiết.

Ví dụ
Ví dụ	Nhập	Xuất
# 1	[["07:10", "10:10"], ["10:20", "12:20"]]	2
# 2	[["14:10", "19:20"], ["15:00", "17:00"], ["18:20", "21:20"], ["14:20", "15:20"], ["16:40", "18:20"]]	3
Ví dụ 1: Cần hai phòng khi xem xét thời gian dọn dẹp, do đó trả về 2.
Ví dụ 2: Cần ba phòng vì một số thời gian đặt chỗ không chồng chéo, do đó trả về 3.
'''
def solution(in_data):
    def to_minutes(t):
        h, m = map(int, t.split(":"))
        return h * 60 + m

    events = []
    for start, end in in_data:
        s = to_minutes(start)
        e = to_minutes(end) + 20
        events.append((s, 1))
        events.append((e, -1))

    events.sort(key=lambda x: (x[0], x[1]))

    current = 0
    max_rooms = 0
    for _, delta in events:
        current += delta
        if current > max_rooms:
            max_rooms = current

    return max_rooms
