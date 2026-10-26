'''
Giải mã chuỗi nhị phân
Mô tả
Để giải mã chuỗi, bạn cần nhóm các ký tự từ đầu chuỗi thành từng nhóm ba ký tự và liệt kê ký tự xuất hiện nhiều nhất trong mỗi nhóm.

Ví dụ, với chuỗi "000101001", khi nhóm lại thành ba ký tự, ta có các nhóm "000", "101", "001". Ký tự xuất hiện nhiều nhất trong từng nhóm lần lượt là 0, 1, 0, do đó chuỗi giải mã được là "010".

Chuỗi mã code sẽ được truyền vào như một tham số của hàm solution. Hãy hoàn thành hàm solution để trả về chuỗi đã được giải mã.

Thông tin tham số
Chuỗi mã code sẽ được truyền vào như một tham số của hàm solution.
Độ dài của code là bội số của 3, nằm trong khoảng từ 3 đến dưới 10,000.
code chỉ bao gồm các ký tự ‘0’ và ‘1’.
Thông tin giá trị trả về
Hãy trả về chuỗi đã được giải mã.

Ví dụ
code	return
"000101001"	"010"
Giải thích ví dụ
Như đã mô tả ở trên.
'''
def solution(code):
    answer = ""
    for i in range(0, len(code), 3):
        group = code[i:i+3]
        if group.count('1') > group.count('0'):
            answer += '1'
        else:
            answer += '0'
    return answer
