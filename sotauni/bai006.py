'''
Đếm số giống nhau trong hai mảng
Mô tả
Bạn đang cố gắng tìm số lượng số giống nhau trong hai mảng chứa các số tự nhiên.

Khi được cung cấp hai mảng tự nhiên arr1, arr2 như là tham số của hàm solution, hãy viết hàm solution để trả về số lượng số giống nhau trong hai mảng. Tuy nhiên, một số mã trong hàm đã bị sai và không hoạt động đúng. Hãy sửa mã đã cho để nó xử lý đúng tất cả các đầu vào. Bạn chỉ cần sửa một dòng mã.

Mô tả tham số
Hai mảng tự nhiên arr1, arr2 được cung cấp như là tham số của hàm solution.

Các phần tử của arr1, arr2 là các số tự nhiên từ 1 đến 100.
Mô tả giá trị trả về
Hãy trả về số lượng số giống nhau trong hai mảng.

Ví dụ
arr1	arr2	result
[3, 9, 3, 14]	[9, 10, 3, 3]	2
[5, 13, 6, 64, 53, 64, 99]	[8, 64, 12, 65, 1]	1
Giải thích ví dụ
Ví dụ #1
Hai mảng đều chứa các số 3 và 9.

Ví dụ #2
Hai mảng đều chứa số 64.
'''
def solution(arr1, arr2):
    answer = 0
    check1 = [0 for i in range(101)]
    check2 = [0 for i in range(101)]
    for i in arr1:
        check1[i] += 1
    for i in arr2:
        check2[i] += 1
    for i in range(1, 101):
        if check1[i] >= 1 and check2[i] >= 1:
            answer += 1
    return answer

def _main():
    _data0 = list(map(int, input().split(", ")))
    _data1 = list(map(int, input().split(", ")))
    #_a0 = int(input())
    _res = solution(_data0, _data1)
    print(_res)

_main()
