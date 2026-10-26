'''
Tính tổng bình phương từ 1 đến k
Mô tả
Khi cho một số k, chúng ta cần tính tổng bình phương từ 1 đến k.

Khi số tự nhiên k được truyền vào như tham số của hàm solution, chúng ta đã viết hàm solution để trả về tổng bình phương từ 1 đến k. Tuy nhiên, một phần của mã bị sai, vì vậy nó không hoạt động đúng với một số đầu vào. Hãy sửa đổi mã đã cho bằng cách chỉ thay đổi <strong>một dòng</strong> để nó hoạt động đúng với tất cả các đầu vào.

Mô tả tham số
Số tự nhiên k được truyền vào như tham số của hàm solution.
k là một số nguyên từ 1 đến 1,000.
Mô tả giá trị trả về
Trả về tổng bình phương từ 1 đến k.
Ví dụ
k	return
3	14
Giải thích ví dụ
11 + 22 + 3*3 = 1 + 4 + 9 = 14
'''
def solution(k):
    answer = 0
    for i in range(1, k+1):
        answer += i * i
    return answer
