'''
Tìm vị trí từ trong từ điển
Mô tả câu hỏi
Câu hỏi này yêu cầu viết một hàm do người dùng định nghĩa để hoàn thành nhiệm vụ.

Xét một từ điển W chứa tất cả các từ có:

Độ dài từ 1 đến 5 ký tự.
Chỉ sử dụng các chữ cái: A, B, C, D, E.
Các từ được sắp xếp theo thứ tự sau:

1. A
2. AA
3. AAA
4. AAAA
5. AAAAA
6. AAAAB
7. AAAAC
...
3905. EEEEE
Hãy hoàn thành hàm solution để trả về vị trí của từ được cho trong từ điển.

Tham số
word: Chuỗi có độ dài từ 1 đến 5.
Mỗi ký tự chỉ có thể là một trong các chữ cái:
A
B
C
D
E
Giá trị trả về
Trả về vị trí của từ trong từ điển dưới dạng số nguyên.

Ví dụ
Ví dụ	Input	Output
#1	"AAAAC"	7
#2	"EEEEA"	3901
Giải thích
Ví dụ 1
Thứ tự các từ đầu tiên trong từ điển:

1. A
2. AA
3. AAA
4. AAAA
5. AAAAA
6. AAAAB
7. AAAAC
Vì vậy:

"AAAAC" → 7
Ví dụ 2
Các từ cuối cùng của từ điển là:

3901. EEEEA
3902. EEEEB
3903. EEEEC
3904. EEEED
3905. EEEEE
Do đó:

"EEEEA" → 3901
'''
