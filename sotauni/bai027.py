'''
Chương trình biến đổi chuỗi theo quy tắc ASCII
Mô tả câu hỏi
Câu hỏi này yêu cầu sửa đổi mã nguồn cơ bản được cung cấp để hoàn thành nhiệm vụ.

Bạn sẽ viết một chương trình thỏa mãn các quy tắc đầu ra sau đây.

Hai tham số sẽ được truyền vào:

Tham số thứ nhất là một chuỗi.
Tham số thứ hai là một số nguyên.
Dựa trên tham số thứ hai, hãy biến đổi chuỗi đầu tiên bằng cách thay đổi giá trị ASCII của từng ký tự.

Ví dụ, với chuỗi "ABC" và số nguyên 3:

Áp dụng tham số thứ hai và tăng thêm +1 cho mỗi ký tự tiếp theo:

A + 3 = D
B + 4 = F
C + 5 = H
Kết quả là:

"DFH"
Nếu đầu vào là:

"GFED", 4
thì kết quả sẽ là:

"KKKK"
Lưu ý: Chỉ cần sửa đổi một dòng trong mã nguồn cơ bản được cung cấp.

Tham số
Tham số thứ nhất là một chuỗi chỉ gồm các ký tự chữ cái.
Tham số thứ hai là một số nguyên.
Giá trị dịch chuyển sẽ bắt đầu từ tham số thứ hai và tăng thêm 1 sau mỗi ký tự tiếp theo.
Không xuất ra các ký tự vượt ngoài phạm vi ASCII hoặc các ký tự không thể in được (ví dụ: ký tự điều khiển hoặc khoảng trắng).
Giá trị trả về
Trả về một chuỗi sau khi đã biến đổi.

Ví dụ
Ví dụ	Input 1	Input 2	Output
#1	"LKJ"	4	"PPP"
#2	"AAAAA"	5	"FGHIJ"
Giải thích
Ví dụ 1

Input:
"LKJ", 4

L + 4 = P
K + 5 = P
J + 6 = P

Output:
"PPP"
Ví dụ 2

Input:
"AAAAA", 5

A + 5 = F
A + 6 = G
A + 7 = H
A + 8 = I
A + 9 = J

Output:
"FGHIJ"
'''
def solution(in_data, number):
    answer = ""
    
    for i in range(0, len(in_data)) :  
        answer +=(chr(ord(in_data[i])+number+i))
        
    return answer
