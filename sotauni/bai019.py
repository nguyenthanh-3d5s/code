'''
Sắp xếp chọn
Vấn đề mô tả
Vấn đề này yêu cầu tìm và sửa một dòng mã bị lỗi để hoàn thành hàm solution.

Giới thiệu về thuật toán sắp xếp chọn
Sắp xếp chọn là một thuật toán sắp xếp, trong đó tìm kiếm dữ liệu nhỏ nhất chưa được sắp xếp và hoán đổi nó với dữ liệu ở vị trí đầu tiên, sau đó lặp lại quá trình này cho đến khi tất cả dữ liệu được sắp xếp.

Khi một mảng số nguyên được cho như hình dưới đây, quá trình sắp xếp theo thứ tự tăng dần sẽ như sau:

image 1

Tìm số nguyên nhỏ nhất trong mảng là 2 và hoán đổi nó với dữ liệu ở vị trí đầu tiên.

image 2

Tiếp theo, tìm dữ liệu nhỏ nhất trong số dữ liệu chưa được sắp xếp, đó là 8, và hoán đổi vị trí của nó với 10.

image 3

Tiếp tục quá trình này, ta sẽ hoán đổi vị trí của 9 và 14.

image 4

Dữ liệu nhỏ tiếp theo là 10, không cần hoán đổi vị trí.

image 5

Dữ liệu nhỏ tiếp theo là 13, hoán đổi với 14.

image 6

Dữ liệu cuối cùng không cần hoán đổi, vì vậy quá trình sắp xếp kết thúc.

Hàm solution
Hàm solution nhận N số nguyên trong mảng arr và áp dụng thuật toán sắp xếp chọn để trả về mảng đã được sắp xếp theo thứ tự tăng dần.

Hãy tìm và sửa một dòng mã bị lỗi để hoàn thành hàm solution.

Tham số
N (1 ≤ N ≤ 1,000)
arr: mảng chứa N số nguyên
-10,000 ≤ (phần tử của arr) ≤ 10,000
Kiểu trả về
Trả về mảng arr đã được sắp xếp theo thứ tự tăng dần.
Ví dụ
N	arr	return
6	[13, 10, 14, 8, 9, 2]	[2, 8, 9, 10, 13, 14]
5	[1, 10, 2, 8, 9]	[1, 2, 8, 9, 10]
Giải thích ví dụ
Ví dụ 1
Giống như mô tả ở trên.

Ví dụ 2
Sắp xếp [1, 10, 2, 8, 9] theo thứ tự tăng dần sẽ cho ra [1, 2, 8, 9, 10].
'''
def solution(N, arr):
    for i in range(0, N):
        minIdx = i
        for j in range(i + 1, N):
            if arr[j] < arr[minIdx]:
                minIdx = j
        tmp = arr[i]
        arr[i] = arr[minIdx]
        arr[minIdx] = tmp
    return arr
