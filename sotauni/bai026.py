'''
Đếm số lần xóa ký tự liên tiếp
Mô tả câu hỏi
Câu hỏi này yêu cầu sửa đổi mã nguồn cơ bản được cung cấp để hoàn thành nhiệm vụ.

Một chuỗi được tạo thành từ các số và/hoặc chữ cái sẽ được nhập vào.

Sau khi loại bỏ các cặp ký tự liên tiếp khỏi chuỗi, chuỗi kết quả được hình thành bằng cách nối các ký tự còn lại.

Bạn sẽ viết một chương trình lặp lại quá trình loại bỏ các cặp ký tự liên tiếp từ chuỗi đầu vào cho đến khi không còn cặp nào có thể bị loại bỏ để đếm tổng số lần xóa.

Ví dụ, nếu nhập vào chuỗi ABCDE99EDCBA:

Loại bỏ 99 ==> ABCDEEDCBA
Loại bỏ EE ==> ABCDDCBA
Loại bỏ DD ==> ABCCBA
Loại bỏ CC ==> ABBA
Loại bỏ BB ==> AA
Loại bỏ AA ==> 6 lần xóa tổng cộng
Chỉ một dòng duy nhất
Duy nhất một dòng trong mã nguồn cơ bản được cung cấp nên được sửa đổi.

Tham số
Một chuỗi được tạo thành từ các số và chữ cái sẽ được nhập vào.

Kiểu trả về
Hàm trả về số lần xóa dưới dạng một số nguyên.

Ví dụ
Ví dụ	Đầu vào	Đầu ra
# 1	"BBCDE77EDC"	5
# 2	"mpPPmp"	1
Ví dụ 1: Vì BB, 77, EE, DD, CC bị loại bỏ, nên trả về 5.
Ví dụ 2: Vì chỉ có PP bị loại bỏ, nên trả về 1.
'''
def solution(in_data):
    answer = 0
    stack=[0] * len(in_data)
    top = -1
    for i in range(0, len(in_data)) :  
        if top != -1 and stack[top] == in_data[i] :
            top -=1
            answer +=1
        else:
            top +=1
            stack[top] = in_data[i]
            
    return  answer
