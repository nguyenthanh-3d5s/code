'''
Giảm điểm tối thiểu
Mô tả
Có một mảng chứa nhiều điểm số theo thứ tự thời gian. Khi giảm một số điểm trong mảng để tạo thành một dạng không giảm, chúng ta muốn tìm giá trị tối thiểu của sự chênh lệch giữa tổng điểm ban đầu và tổng điểm đã thay đổi. Nếu điểm số đã không giảm ngay từ đầu, thì không cần phải điều chỉnh điểm số.

Khi mảng điểm số theo thứ tự thời gian được cung cấp dưới dạng tham số grade cho hàm solution, hãy viết hàm để trả về tổng điểm tối thiểu cần giảm. Tuy nhiên, một số mã trong hàm đã bị sai, vì vậy hãy sửa mã để nó hoạt động đúng với mọi đầu vào. Chỉ cần sửa một dòng mã.

Giải thích tham số
Mảng điểm số theo thứ tự thời gian grade được cung cấp như một tham số cho hàm solution.

Các phần tử của grade là các số tự nhiên trong khoảng từ 0 đến 100.
Giải thích giá trị trả về
Khi giảm một số điểm trong mảng để tạo thành một dạng không giảm, hãy trả về giá trị tối thiểu của sự chênh lệch giữa tổng điểm ban đầu và tổng điểm đã thay đổi.

Ví dụ
grade	result
[2,1,3]	1
[1,2,3]	0
Giải thích ví dụ
Ví dụ #1
Khi giảm điểm số đầu tiên xuống 1, điểm số sẽ trở thành dạng không giảm, và đây là trường hợp giảm điểm số ít nhất.

Ví dụ #2
Vì điểm số đã không giảm ngay từ đầu nên không cần phải thay đổi điểm số.
'''
def solution(grade):
    n = len(grade)
    answer = 0
    for i in range(n - 2, -1, -1):
        if grade[i] > grade[i + 1]:
            answer += grade[i] - grade[i + 1]
            grade[i] = grade[i + 1]
    return answer

def _main():
    _data0 = list(map(int, input().split(", ")))
    #_a0 = int(input())
    _res = solution(_data0)
    print(_res)

_main()
