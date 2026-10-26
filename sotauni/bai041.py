'''
Tìm số tự nhiên nhỏ nhất không thể tạo ra từ danh sách số
Mô tả
Khi được cung cấp một danh sách số, chúng ta cần tìm số tự nhiên nhỏ nhất không thể tạo ra bằng cách cộng một phần hoặc toàn bộ các số trong danh sách.

Ví dụ, với danh sách [1, 2, 4, 9], số 7 có thể được tạo ra bằng 1 + 2 + 4, nhưng số 8 không thể được tạo ra bằng bất kỳ cách nào.

Danh sách số numbers sẽ được truyền vào như một tham số của hàm solution. Chúng ta cần viết hàm solution để trả về số tự nhiên nhỏ nhất không thể tạo ra bằng cách cộng một phần hoặc toàn bộ các số trong numbers. Tuy nhiên, một phần của mã đã bị sai, vì vậy nó không hoạt động đúng với một số đầu vào. Hãy sửa mã bằng cách thay đổi một dòng trong mã đã cho để nó hoạt động đúng với tất cả các đầu vào.

Giải thích tham số
Danh sách số numbers sẽ được truyền vào như một tham số của hàm solution.

Độ dài của numbers là từ 2 đến 1,000.
Các phần tử trong numbers là từ 1 đến 10,000.
numbers được cung cấp theo thứ tự đã sắp xếp.
Giải thích giá trị trả về
Hãy trả về số tự nhiên nhỏ nhất không thể tạo ra bằng cách cộng một phần hoặc toàn bộ các số trong numbers.

Ví dụ
numbers	return
[1, 2, 4, 9]	8
Giải thích ví dụ
Công thức	Tổng
1	1
2	2
1 + 2	3
4	4
1 + 4	5
2 + 4	6
1 + 2 + 4	7
Không thể	8
Như vậy, số 8 không thể được tạo ra. Do đó, chúng ta trả về 8.
'''
def solution(numbers):
    answer = 0
    current = 0
    for number in numbers:
        if current + 1 < number:
            break
        current += number
    answer = current + 1
    return answer
