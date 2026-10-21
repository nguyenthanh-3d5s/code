'''
Xác định số người có thể qua cầu đá
Mô tả
Có một cầu đá chỉ có thể đi qua theo một hướng. Khi biết khoảng cách giữa các viên đá (hoặc khoảng cách giữa điểm xuất phát / điểm đến và viên đá) và khoảng cách tối đa mà mỗi người có thể nhảy, chúng ta muốn xác định có bao nhiêu người có thể qua cầu đá.

Ví dụ
Ví dụ, trong hình dưới đây, khoảng cách giữa các viên đá được biểu diễn bằng mảng [2, 3].

Hình ảnh

Khi mảng khoảng cách giữa các viên đá là stones và mảng khoảng cách tối đa mà mỗi người có thể nhảy là distances được truyền vào hàm solution, hãy hoàn thành hàm solution để trả về số người có thể qua cầu đá.

Thông tin tham số
Mảng stones chứa khoảng cách giữa các viên đá.
Mảng distances chứa khoảng cách tối đa mà mỗi người có thể nhảy.
Điều kiện
Phần tử của stones là các số tự nhiên từ 1 đến 10.
Phần tử của distances là các số tự nhiên từ 1 đến 10.
Mảng distances có dạng [khoảng cách tối đa của người thứ nhất, khoảng cách tối đa của người thứ hai,...].
Thông tin giá trị trả về
Hãy trả về số người có thể qua cầu đá.

Ví dụ
stones	distances	return
[2, 3]	[2, 6]	1
Giải thích ví dụ
Người đầu tiên có thể nhảy từ điểm xuất phát đến viên đá đầu tiên nhưng không thể nhảy đến điểm đến. Người thứ hai có thể qua cầu đá. Do đó, giá trị trả về là 1.
'''
from math import *

def solution(stones, distances):
    _max = max(stones)
    answer = 0
    for i in distances:
        if i >= _max:
            answer += 1
    return answer

def _main():
    _data0 = list(map(int, input().split(", ")))
    _data1 = list(map(int, input().split(", ")))
    #_a0 = int(input())
    _res = solution(_data0, _data1)
    print(_res)

_main()
