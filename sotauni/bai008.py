'''
Kiểm tra khả năng tạo từ từ chuỗi
Mô tả
Bạn cần xác định xem có thể tạo ra ít nhất n từ word từ các ký tự trong chuỗi text hay không.

Ví dụ
Ví dụ, từ chuỗi "helloqheoll", bạn có thể tạo ra 2 từ "hello".

Tham số
Hàm solution nhận vào các tham số sau:

text: chuỗi ký tự cần kiểm tra.
word: từ cần tạo.
n: số lượng từ cần tạo.
Điều kiện
text và word là chuỗi ký tự viết thường.
Độ dài của text từ 5 đến 1000 ký tự.
Độ dài của word từ 3 đến 100 ký tự.
n là số nguyên dương từ 1 đến 10.
Giá trị trả về
Hàm sẽ trả về true nếu có thể tạo ra ít nhất n từ word từ các ký tự trong text, ngược lại sẽ trả về false.

Ví dụ
text	word	n	return
"helloqheoll"	"hello"	2	true
"helloqhol"	"hello"	2	false
Giải thích ví dụ
Ví dụ #1
Như đã mô tả ở trên.

Ví dụ #2
Thiếu một ký tự 'e' và một ký tự 'l', do đó không thể tạo ra 2 từ "hello". Vì vậy, hàm trả về false.
'''
def solution(text, word, n):
    letters = [0 for i in range(26)]
    for alp in text:
        letters[ord(alp) - ord('a')] += 1

    make_possible = 0
    flag = True
    while flag:
        for alp in word:
            if letters[ord(alp) - ord('a')] <= 0:
                flag = False
                break
            else:
                letters[ord(alp) - ord('a')] -= 1
        if flag:
            make_possible += 1
    
    return make_possible == n

def _main():
    #_data0 = list(map(int, input().split(", ")))
    _a0 = input().replace('"', '')
    _a1 = input().replace('"', '')
    _a2 = int(input())
    _res = solution(_a0, _a1, _a2)
    print(_res)

_main()
