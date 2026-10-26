'''
Tính giai thừa
Mô tả
Giai thừa (factorial) là tích của tất cả các số nguyên từ 1 đến một số nguyên dương n, được ký hiệu là n!. Ví dụ, 5! là 120, vì nó là tích của các số từ 1 đến 5.

Khi một số tự nhiên n được truyền vào như tham số của hàm solution, hãy viết hàm solution để tính toán n! và trả về kết quả. Tuy nhiên, một phần của mã bị sai, vì vậy nó không hoạt động đúng với một số đầu vào. Hãy sửa mã đã cho bằng cách thay đổi một dòng để nó hoạt động đúng với tất cả các đầu vào.

Thông tin tham số
Số tự nhiên n được truyền vào như tham số của hàm solution.
n là số tự nhiên từ 1 đến 8.
Thông tin giá trị trả về
Trả về giá trị của n! đã được tính toán.
Ví dụ
n	return
5	120
Giải thích ví dụ
5! = 1 x 2 x 3 x 4 x 5 = 120
'''
def solution(n):
    answer = 1
    for i in range(1, n+1):
        answer *= i
    return answer
