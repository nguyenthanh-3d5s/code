'''
Tính tổng số lần xuất hiện của phần tử trong mảng
Cho hai mảng Arr và Brr, hãy tính xem mỗi phần tử của Brr xuất hiện bao nhiêu lần ở Arr và hoàn thiện hàm trả về tổng số lần xuất hiện.

Ví dụ, khi Arr = [1, 1, 2, 2, 3, 5, 6], Brr = [1, 2, 3, 4],

Phần tử đầu tiên thuộc Brr là 1, xuất hiện 2 lần trong Arr
Phần tử thứ hai là 2, xuất hiện 2 lần trong Arr
Phần tử thứ ba là 3, xuất hiện 1 lần trong Arr
Phần tử thứ tư là 4, xuất hiện 0 lần trong Arr
Do đó trả về giá trị 2 + 2 + 1 + 0 là 5.

Chỉ sửa một dòng trong code đã cho và hoàn thiện hàm solution để trả về tổng của mảng trên.

Giới hạn
1 <= Kích thước của mảng <= 100
-10 <= Số nguyên thuộc mảng <= 10
Ví dụ
Arr	Brr	return
[1, 1, 2, 2, 3, 5, 6]	[1, 2, 3, 4]	5
Giải thích ví dụ
Tương tự ví dụ đã cho ở câu trên.
'''
def Lower_bound(arr, data):
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] < data:
            left = mid + 1
        else:
            right = mid - 1
    return left

def solution(Arr, Brr):
    answer = 0
    copyArr = [i for i in Arr]
    copyArr.sort()
    for data in Brr:
        answer += Lower_bound(copyArr, data + 1) - Lower_bound(copyArr, data)
    return answer
