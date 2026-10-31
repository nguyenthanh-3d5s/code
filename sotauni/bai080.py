'''
Kiểm tra khả năng dịch chuyển mảng
Mô tả
Cho hai mảng arrayA và arrayB được tạo bởi số nguyên, cần cân nhắc xem có thể dịch chuyển mảng arrayA sang bên phải (ít nhất một ô) để tạo thành mảng arrayB không.

Ví dụ về dịch chuyển mảng arrayA
Mảng arrayA [1, 2, 3, 4, 5] sang bên phải như sau:

Mảng arrayB [5, 1, 2, 3, 4]: Có thể tạo nên mảng này bằng cách dịch chuyển mảng arrayA sang bên phải (dịch chuyển một ô).
Mảng arrayB [4, 5, 1, 2, 3]: Có thể tạo nên mảng này bằng cách dịch chuyển mảng arrayA sang bên phải (dịch chuyển hai ô).
Mảng arrayB [5, 4, 3, 2, 1]: Không thể tạo nên mảng này bằng cách dịch chuyển mảng arrayA sang bên phải.
Cấu trúc chương trình
Để thực hiện việc này, đã viết cấu trúc chương trình như dưới:

Nếu chiều dài của arrayA và arrayB khác nhau thì return false.
Nếu thành phần cấu trúc của hai mảng này khác nhau dẫn đến không thể đồng nhất dù đã dịch chuyển sang bên phải thì return false.
Nối hai mảng arrayA với nhau để tạo ra mảng có chiều dài gấp 2 lần.
Nếu trong các thành phần của mảng arrayA có phần mảng giống với arrayB thì return true, nếu không có thì return false.
Cần viết hàm solution để khi cho hai mảng arrayA và arrayB dưới dạng tham số, hàm return true nếu có thể tạo ra mảng arrayB bằng cách dịch chuyển arrayA sang bên phải, return false nếu không thể. Điền vào chỗ trống để hoàn thành code.

Giải thích tham số
Cho hai mảng arrayA và arrayB dưới dạng tham số của hàm solution.
Chiều dài của arrayA nằm trong khoảng từ 1 đến 1,000.
Phần tử của arrayA là số nguyên nằm trong khoảng từ 0 đến 1,000.
Chiều dài của arrayB nằm trong khoảng từ 1 đến 1,000.
Phần tử của arrayB là số nguyên nằm trong khoảng từ 0 đến 1,000.
Giải thích giá trị return
Hãy return true nếu có thể tạo ra mảng arrayB bằng cách dịch chuyển arrayA sang bên phải, return false nếu không thể.
Ví dụ
Phân loại	arrayA	arrayB	return
Ví dụ #1	[1, 2, 3, 4, 5]	[3, 4, 5, 1, 2]	true
Ví dụ #2	[1, 2, 3, 4, 5]	[5, 4, 3, 2, 1]	false
Giải thích ví dụ
Ví dụ #1: Nếu dịch chuyển mảng arrayA sang bên phải (dịch chuyển 3 ô) thì có thể tạo ra mảng arrayB, return true.
Ví dụ #2: Nếu dịch chuyển mảng arrayA sang bên phải nhưng không thể tạo ra mảng arrayB, return false.
'''
def func_a(array):
    ret = array + array
    return ret

def func_b(first, second):
    MAX_NUMBER = 1001
    counter = [0 for _ in range(MAX_NUMBER)]
    for f, s in zip(first, second):
        counter[f] += 1
        counter[s] -= 1
    for c in counter:
        if c != 0:
            return False
    return True

def func_c(first, second):
    length = len(second)
    for i in range(length):
        if ​first[i:i+length] == second​:
            return True
    return False

def solution(arrayA, arrayB):
    if len(arrayA) != len(arrayB):
        return False
    if func_​b(arrayA, arrayB)​:
        arrA_temp = func_a(arrayA)
        if func_​c(arrA_temp, arrayB)​:
            return True
    return False
