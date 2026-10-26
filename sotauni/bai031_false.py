'''
Chia chuỗi theo quy tắc
Mô tả câu hỏi
Câu hỏi này yêu cầu viết một hàm do người dùng định nghĩa để hoàn thành nhiệm vụ.

Bạn sẽ chia một chuỗi thành nhiều chuỗi dựa trên một quy tắc cụ thể.

Quy tắc để chia một chuỗi như sau:

Tìm các ký tự giống nhau liên tiếp trong chuỗi.
Khi tìm thấy một chuỗi các ký tự giống nhau, đọc thêm các ký tự có độ dài giống nhau và chia tại điểm đó.
Chương trình đếm số lần chuỗi đã được chia theo quy tắc này.
Ví dụ, khi chuỗi 'ABABABC' được đưa ra,

Đọc ký tự đầu tiên 'A'. Số lượng ký tự giống nhau với 'A' là 1. Ký tự tiếp theo 'B' được đọc dựa trên độ dài giống nhau là 1 và chia một lần. Chuỗi còn lại trở thành 'ABABC'. Quá trình này tiếp tục; 'AB' chia thêm hai lần nữa. Chuỗi còn lại cuối cùng trở thành 'C'. Khi gặp một ký tự mà quy tắc không thể áp dụng hoặc không còn ký tự nào để đọc, chương trình kết thúc.

Tổng số lần chuỗi được chia theo quy tắc này là 4.

Hoàn thành hàm có tên solution để trả về số lần chuỗi đã được chia theo quy tắc này.

Tham số
Một chuỗi gồm các ký tự chữ hoa và chữ thường sẽ được nhập vào.

Kiểu trả về
Hàm trả về số lần chia dưới dạng số nguyên.

Ví dụ
Ví dụ	Đầu vào	Đầu ra
# 1	"AABCBC"	2
# 2	"AAbbanaaannac"	3
Ví dụ 1: Không có quy tắc nào phù hợp với 'AA', vì vậy 'BCBC', v.v., trả về 2.
Ví dụ 2: 'AA' và 'bb' theo cùng một quy tắc, 'a' và 'n' theo cùng một quy tắc, và 'aaa' không có quy tắc nào phù hợp, vì vậy trả về 3.
'''
