'''
Xử lý tình trạng điểm danh trong lớp học
Mô tả
Chúng ta sẽ xử lý tình trạng điểm danh, muộn và vắng mặt dựa trên thời gian vào lớp.

Trong vòng n phút sau khi bắt đầu lớp: Điểm danh
Quá n phút và trong vòng m phút sau khi bắt đầu lớp: Muộn
Quá m phút sau khi bắt đầu lớp: Vắng mặt
Ví dụ, nếu thời gian bắt đầu lớp là 1 giờ 30 phút chiều và n là 10, m là 30, thì sẽ được tính là điểm danh đến 1 giờ 40 phút chiều, muộn từ 1 giờ 41 phút chiều đến 2 giờ chiều. Sau đó, nếu vào lớp, sẽ được tính là vắng mặt.

Thời gian bắt đầu lớp start, mảng thời gian vào lớp của học sinh attendances, thời gian tính điểm danh n, và thời gian tính muộn m sẽ được truyền vào tham số của hàm solution. Hàm solution sẽ trả về mảng với tình trạng điểm danh của từng học sinh, trong đó điểm danh là 0, muộn là 1, và vắng mặt là 2. Tuy nhiên, một phần của mã bị sai, vì vậy nó không hoạt động đúng với một số đầu vào. Hãy sửa mã đã cho bằng cách thay đổi <strong>một dòng</strong> để nó hoạt động đúng với tất cả các đầu vào.

Giải thích tham số
Thời gian bắt đầu lớp start, mảng thời gian vào lớp của học sinh attendances, thời gian tính điểm danh n, và thời gian tính muộn m sẽ được truyền vào tham số của hàm solution.

Các phần tử của start và attendances có định dạng HH:MM.
Ví dụ, 1 giờ 30 phút chiều được biểu diễn là "13:30", 9 giờ 30 phút sáng được biểu diễn là "09:30".
Thời gian của các phần tử start và attendances chỉ nằm trong khoảng từ 00:00 đến 23:59.
Các phần tử của attendances phải bằng hoặc lớn hơn thời gian start.
Độ dài của attendances từ 1 đến 10.
n là số tự nhiên từ 0 đến 30.
m là số tự nhiên lớn hơn n và không quá 60.
Giải thích giá trị trả về
Hàm sẽ trả về mảng với tình trạng điểm danh của từng học sinh, trong đó điểm danh là 0, muộn là 1, và vắng mặt là 2.

Ví dụ
start	attendances	n	m	return
"09:00"	["09:10", "09:30", "09:31"]	10	30	[0, 1, 2]
Giải thích ví dụ
Tình trạng điểm danh dựa trên thời gian vào lớp như sau:

Thời gian vào lớp	Kết quả
09:00 ~ 09:10	Điểm danh. Đánh dấu 0
09:11 ~ 09:30	Muộn. Đánh dấu 1
09:31 ~	Vắng mặt. Đánh dấu 2
'''
def hhmm_to_int(hhmm):
    hh, mm = hhmm.split(":")
    return int(hh) * 60 + int(mm)

def solution(start, attendances, n, m):
    answer = []
    start = hhmm_to_int(start)
    for attendance in attendances:
        attendance = hhmm_to_int(attendance)
        if attendance <= start + n:
            answer.append(0)
        elif attendance <= start + m:
            answer.append(1)
        else:
            answer.append(2)
    return answer
