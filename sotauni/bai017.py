'''
Giải mã Caesar
Vấn đề mô tả
Vấn đề này yêu cầu tìm và sửa một dòng mã bị lỗi để hoàn thành hàm solution.

Vào thời kỳ La Mã, vua Caesar đã sử dụng một kỹ thuật mã hóa thay thế để gửi và nhận tin nhắn bằng cách thay đổi các ký tự thành các ký tự khác. Ví dụ, nếu quy tắc mã hóa hôm nay là thay đổi ký tự thành ký tự đứng sau nó 3 vị trí, thì các ký tự sẽ được mã hóa như hình dưới đây.

Lưu ý rằng văn bản trước khi mã hóa được gọi là văn bản gốc và văn bản đã mã hóa được gọi là văn bản mã.

Trong hình trên, các ký tự từ A đến W được thay thế bằng ký tự đứng sau 3 vị trí, trong khi 3 ký tự cuối cùng là X, Y, Z quay trở lại đầu và được thay thế bằng A, B, C tương ứng. Khi có một biến số nguyên key biểu thị quy tắc mã hóa sẽ được sử dụng hôm nay và một chuỗi plaintext biểu thị văn bản gốc, hãy sửa một dòng trong hàm solution để xuất ra chuỗi mã answer được tạo ra theo quy tắc mã hóa hôm nay.

Tham số
key: biến số nguyên biểu thị quy tắc mã hóa sẽ được sử dụng hôm nay
giá trị số nguyên từ 1 đến 25
plaintext: biến chuỗi sẽ được mã hóa
chuỗi được tạo thành từ 1 đến 10 ký tự
mỗi ký tự thuộc 26 ký tự chữ cái in hoa từ A đến Z
mã ASCII của A là 65
mã ASCII của Z là 90
Kiểu trả về
answer: chuỗi đã được mã hóa từ plaintext theo quy tắc key
Ví dụ
key	plaintext	answer
3	"HELLO"	"KHOOR"
4	"COSPRO"	"GSWTVS"
key: thay thế mỗi ký tự bằng ký tự đứng sau 3 vị trí

tuy nhiên, X, Y, Z quay trở lại đầu và được thay thế bằng A, B, C tương ứng.
plaintext: theo hình trên, các ký tự sẽ được mã hóa như sau:

H: K
E: H
L: O
L: O
O: R
Giải thích giá trị đầu ra

xuất ra văn bản mã đã được mã hóa từ văn bản gốc theo key
answer = "KHOOR"
Giải thích ví dụ
Ví dụ #1 Giống như mô tả ở trên.

Ví dụ #2 Xuất ra "GSWTVS" tùy thuộc vào chuỗi sẽ được mã hóa.
'''
def solution(key, plaintext):
    answer = ""
    
    for letter in plaintext:
        if ord(letter) + key >= 65 and ord(letter) + key <= 90:
            letter = chr(ord(letter) + key)
            
        else:
            letter = chr(ord(letter) - (26 - key))
            
        answer = answer + letter
        
    return answer
