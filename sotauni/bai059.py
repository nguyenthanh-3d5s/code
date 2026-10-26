'''
Tính số từ có thể học trong thời gian tự học
Vấn đề mô tả
Khi được cung cấp thời gian tự học, chúng ta muốn biết có thể học được bao nhiêu từ tiếng Anh trong thời gian đó. Mỗi từ cần 5 phút để học và không thể chia nhỏ việc học một từ ra nhiều khoảng thời gian khác nhau.

Ví dụ, nếu thời gian tự học là ["09:0009:30", "12:2313:00"], thì trong khoảng từ 09:00 đến 09:30 có thể học được 6 từ, và từ 12:23 đến 13:00 có thể học được 7 từ. Do đó, tổng số từ có thể học được là 13.

Để thực hiện điều này, chúng ta đã xây dựng cấu trúc chương trình như sau:

Kiểm tra thời gian tự học có bao nhiêu phút trong mỗi khoảng thời gian.
Tính số từ tiếng Anh có thể học được trong mỗi khoảng thời gian tự học.
Tính tổng số từ có thể học được từ bước 2.
Mảng chứa thời gian tự học là timetable, và độ dài của timetable là timetable_len, sẽ được truyền vào hàm solution. Chúng ta sẽ viết hàm solution để trả về số từ có thể học được trong thời gian tự học.

Hãy điền vào các chỗ trống để hoàn thành mã code sao cho hoạt động đúng.

Mô tả tham số
Mảng timetable chứa các khoảng thời gian tự học, và độ dài của timetable là timetable_len, sẽ được truyền vào hàm solution.

timetable_len có giá trị từ 1 đến 100.
Các phần tử của timetable là chuỗi có dạng "HH:MM~HH:MM". Phần đầu tiên "HH:MM" là thời gian bắt đầu, và phần thứ hai "HH:MM" là thời gian kết thúc.
Mô tả giá trị trả về
Hãy trả về số từ có thể học được trong thời gian tự học.

Ví dụ
timetable	timetable_len	return
["09:0009:30", "12:2313:00"]	2	13
["10:0010:15", "11:1111:15", "14:55~15:11"]	3	6
Ví dụ 1: Giống như mô tả ở trên.
Ví dụ 2: Trong khoảng thời gian "10:0010:15" có thể học 3 từ, "11:1111:15" không học được từ nào, và "14:55~15:11" có thể học 3 từ. Do đó, tổng số từ có thể học được là 6.
'''
def func_a(arr):
    answer = []
    for i in arr:
        answer.append(i // 5)
    return answer

def func_b(arr):
    answer = 0
    for i in arr:
        answer += i
    return answer

def func_c(arr):
    answer = []
    for t in arr:
        begin, end = t.split('~')
        begin_time = int(begin.split(':')[0]) * 60 + int(begin.split(':')[1])
        end_time = int(end.split(':')[0]) * 60 + int(end.split(':')[1])
        answer.append(end_time - begin_time)
    return answer

def solution(timetable):
    time = func_​c​(​timetable​)
    count = func_​a​(​time​)
    answer = func_​b​(​count​)
    return answer
