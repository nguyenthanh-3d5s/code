'''
Xác định đội thắng trong trò chơi bóng rổ
Trong trò chơi bóng rổ, chúng ta cần xác định số đội thắng và điểm số của họ. Các quy tắc của trò chơi bóng rổ như sau:

Mỗi đội gồm 5 thành viên.
Đội có tổng điểm của giá trị nhỏ nhất và lớn nhất trong số điểm của các thành viên sẽ thắng.
Để thực hiện điều này, chúng ta đã xây dựng cấu trúc chương trình như sau:

Tìm giá trị lớn nhất trong số điểm của các thành viên trong mỗi đội.
Tìm giá trị nhỏ nhất trong số điểm của các thành viên trong mỗi đội.
Tính tổng của giá trị nhỏ nhất và lớn nhất trong số điểm của các thành viên trong mỗi đội.
Mảng first chứa điểm số của các thành viên trong đội 1, mảng second chứa điểm số của các thành viên trong đội 2 sẽ được truyền vào tham số của hàm solution. Chúng ta cần viết hàm solution để trả về số đội thắng và điểm số của đội thắng. Hãy điền vào các chỗ trống để mã hoạt động chính xác, sử dụng các hàm func_a, func_b, func_c và các tham số phù hợp.

Mô tả tham số
Mảng first chứa điểm số của các thành viên trong đội 1, mảng second chứa điểm số của các thành viên trong đội 2 sẽ được truyền vào tham số của hàm solution. Không có trường hợp hòa giữa hai đội.
Các phần tử của first và second là các số tự nhiên từ 1 đến 100.
Mô tả giá trị trả về
Hãy trả về mảng chứa số đội thắng và điểm số của đội thắng.

Ví dụ
first	second	return
[10, 10, 10, 10, 1]	[5, 2, 2, 2, 10]	[2, 12]
Giải thích ví dụ
Điểm số nhỏ nhất của đội 1 là 1, điểm số lớn nhất là 10, do đó điểm số của đội 1 là 11. Điểm số nhỏ nhất của đội 2 là 2, điểm số lớn nhất là 10, do đó điểm số của đội 2 là 12.

Vì vậy, đội 2 thắng với 12 điểm trong trò chơi bóng rổ.
'''
def fun_a(arr):
    num = arr[0]
    for i in arr:
        if num > i:
            num = i
    return num

def fun_b(arr):
    num = arr[0]
    for i in arr:
        if num < i:
            num = i
    return num

def fun_c(first, second):
    ret = [0,0]
    if first > second:
        ret[0] = 1
        ret[1] = first

    else:
        ret[0] = 2
        ret[1] = second

    return ret

def solution(first, second):
    max1 = fun_a(first)
    max2 = fun_a(second)
    min1 = fun_b(first)
    min2 = fun_b(second)
    answer = fun_c(max1 + min1, max2 + min2)

    return answer
