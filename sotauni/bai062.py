'''
Tính Thời Gian Khởi Hành Đồng Thời Của Các Xe Buýt
Vấn đề mô tả
Tất cả các xe buýt tại trạm xe buýt đều khởi hành vào lúc 9 giờ. Khi biết khoảng cách giữa các chuyến xe, chúng ta muốn tính toán xem bao nhiêu phút thì tất cả các xe buýt sẽ khởi hành đồng thời.

Yêu cầu
Cho một mảng intervals chứa khoảng cách giữa các chuyến xe theo đơn vị phút, và độ dài của mảng intervals_len được truyền vào như là tham số của hàm solution. Hãy hoàn thành hàm solution để trả về số phút mà tất cả các xe buýt khởi hành đồng thời.

Mô tả tham số
Mảng intervals chứa khoảng cách giữa các chuyến xe theo đơn vị phút.
Độ dài của mảng intervals là intervals_len.
intervals_len là một số nguyên dương từ 2 đến 10.
Các phần tử trong intervals là các số nguyên dương từ 1 đến 30.
Mô tả giá trị trả về
Hãy trả về số phút mà tất cả các xe buýt khởi hành đồng thời.

Ví dụ
intervals	intervals_len	return
[6, 8, 20, 5]	4	120
[20, 10, 4, 25]	4	100
Ví dụ 1:
Khoảng cách giữa các chuyến xe là 6, 8, 20, 5 phút, do đó có thể khởi hành đồng thời sau 120 phút, vì vậy trả về 120.

Ví dụ 2:
Khoảng cách giữa các chuyến xe là 20, 10, 4, 25 phút, do đó có thể khởi hành đồng thời sau 100 phút, vì vậy trả về 100.
'''
from math import gcd

def solution(intervals):
    answer = 1
    for x in intervals:
        answer = answer * x // gcd(answer, x)
    return answer
