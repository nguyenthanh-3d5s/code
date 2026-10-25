'''
Kiểm tra độ an toàn của mật khẩu
Mô tả bài toán
Chúng ta muốn xác định xem mật khẩu đã cho có an toàn hay không. Độ an toàn của mật khẩu được xác định dựa trên các quy tắc sau:

Không được sử dụng chuỗi liên tiếp từ 3 ký tự trở lên là chữ cái hoặc số (ví dụ: abc, cba, 012, 987, v.v.).
Khi chuỗi mật khẩu được cung cấp dưới dạng tham số password, hãy viết hàm solution để trả về true nếu chuỗi đã cho phù hợp với quy tắc trên, và false nếu không. Tuy nhiên, một phần của mã đã bị sai, vì vậy nó không hoạt động chính xác với một số đầu vào. Hãy sửa mã đã cho bằng cách chỉ thay đổi một dòng để nó hoạt động chính xác với tất cả các đầu vào.

Tham số
Chuỗi mật khẩu sẽ được cung cấp dưới dạng tham số của hàm solution.

password là một chuỗi chỉ chứa các chữ cái thường và số.
Độ dài của password nằm trong khoảng từ 5 đến 20 ký tự.
Kiểu trả về
Hàm sẽ trả về True nếu chuỗi đã cho phù hợp với quy tắc, và False nếu không.

Ví dụ
password	result
"cospro890"	True
"cba323"	False
Ví dụ 1:
Chuỗi đã cho không có chuỗi liên tiếp từ 3 ký tự trở lên.

Ví dụ 2:
"cba" là một chuỗi liên tiếp 3 ký tự, vì vậy không phù hợp với quy tắc đã cho.
'''
def solution(password):
    length = len(password)
    for i in range(length - 2):
        first_check = ord(password[i + 1]) - ord(password[i])
        second_check = ord(password[i + 2]) - ord(password[i + 1])
        if first_check == second_check and (first_check == 1 or first_check == -1):
            return False
    return True
