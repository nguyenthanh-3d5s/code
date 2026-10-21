'''
Tính Thời Gian Chờ Tàu Điện Ngầm
Mô tả bài toán
Có một mảng (danh sách) chứa thời gian đến của tàu điện ngầm trong ngày hôm nay theo thứ tự. Khi có thời gian hiện tại, chúng ta cần tìm ra thời gian chờ tối thiểu để có thể lên tàu. Để làm điều này, chúng ta đã xây dựng cấu trúc chương trình như sau:

Chuyển đổi thời gian hiện tại sang phút tính từ 00:00.
Duyệt qua mảng (danh sách) và thực hiện các bước sau:
2-1. Chuyển đổi thời gian đến của từng tàu điện ngầm sang phút tính từ 00:00.
2-2. So sánh thời gian hiện tại với thời gian đến của tàu điện ngầm để tìm ra thời gian chờ tối thiểu.
Xuất ra thời gian chờ tối thiểu đã tìm được ở bước 2.
Khi được cung cấp mảng thời gian đến của tàu điện ngầm trong ngày hôm nay là subway_times và thời gian hiện tại là current_time, hãy viết hàm solution để xuất ra thời gian chờ tối thiểu cần thiết để lên tàu. Trong quá trình này, hãy tham khảo cấu trúc trên và viết các phần trùng lặp thành hàm func_a. Hãy điền vào các chỗ trống để hoàn thành mã nguồn sao cho hoạt động đúng.

Tham số
Hàm solution nhận vào hai tham số:

subway_times: Mảng (danh sách) chứa thời gian đến của tàu điện ngầm trong ngày hôm nay theo thứ tự.
current_time: Thời gian hiện tại.
Điều kiện:
Độ dài của subway_times từ 1 đến 100.
Thời gian đến của tàu điện ngầm không bị trùng lặp.
Thời gian đến và thời gian hiện tại được biểu diễn theo định dạng 24 giờ.
Định dạng 24 giờ từ 00:00 đến 23:59.
Thời gian đầu tiên đến của tàu điện ngầm là sau 05:00 và thời gian cuối cùng là trước 23:59.
Kiểu trả về
Hàm sẽ trả về thời gian chờ tối thiểu cần thiết để lên tàu. Nếu không có tàu nào có thể lên trong ngày hôm nay, hãy trả về -1.

Ví dụ
subway_times	current_time	result
["05:31", "11:59", "13:30", "23:32"]	"12:00"	90
["14:31", "15:31"]	"15:31"	0
Giải thích ví dụ 1:
Thời gian đến tàu điện ngầm gần nhất với thời gian hiện tại 12:00 là 13:30. Do đó, bạn sẽ phải chờ ít nhất 90 phút.

Giải thích ví dụ 2:
Thời gian hiện tại là 15:31 và bạn có thể lên tàu đến vào lúc 15:31. Do đó, bạn chỉ cần chờ 0 phút.
'''
def func_a(times):
    hour = int(times[:2])
    minute = int(times[3:])
    return hour*60 + minute

def solution(subway_times, current_time):
    current_minute = func_a(current_time)
    INF = 1000000000
    answer = INF
    for s in subway_times:
        subway_minute = func_a(s)
        if subway_minute >= current_minute:
            answer = subway_minute - current_minute
            break
    if answer == INF:
        return -1
    return answer

def _main():
    _data0 = input().replace('"', '').split(", ")
    _a0 = input().replace('"', '')
    _res = solution(_data0, _a0)
    print(_res)

_main()
