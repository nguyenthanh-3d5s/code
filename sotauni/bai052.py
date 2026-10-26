'''
Đếm số lượng phần tử trong mảng
Mô tả
Bạn cần xác định có bao nhiêu số trong mảng nhỏ hơn a và lớn hơn b.

Đầu vào
Hàm solution nhận vào một mảng số numbers và hai số a, b. Bạn cần viết hàm solution để trả về số lượng phần tử trong numbers nhỏ hơn a hoặc lớn hơn b. Tuy nhiên, một phần của mã bị sai nên không hoạt động đúng với một số đầu vào. Hãy sửa mã đã cho bằng cách thay đổi một dòng để nó hoạt động đúng với tất cả các đầu vào.

Thông tin tham số
Mảng tự nhiên numbers và hai số a, b được truyền vào hàm solution.
Độ dài của numbers là từ 1 đến 1,000.
Các phần tử của numbers là các số tự nhiên từ 1 đến 1,000.
a và b là các số tự nhiên, với điều kiện 1 ≦ a < b ≦ 1000.
Thông tin giá trị trả về
Hàm trả về số lượng phần tử trong numbers nhỏ hơn a hoặc lớn hơn b.

Ví dụ
numbers	a	b	return
[3, 4, 1, 2, 5]	2	4	2
Giải thích ví dụ
Số nhỏ hơn a hoặc lớn hơn b là 1 và 5. Do đó, hàm trả về 2.
'''
def solution(numbers, a, b):
    answer = 0
    for number in numbers:
        if number < a or number > b:
            answer += 1
    return answer
