'''
Tính tổng số lần xuất hiện của chữ số
Đề bài
Cho chuỗi S chỉ chứa các ký tự là chữ số. Hãy điền vào chỗ trống để hoàn thành hàm solution trả về tổng giữa số lần xuất hiện của chữ số xuất hiện nhiều nhất trong chuỗi này cộng với số lần xuất hiện của chữ số xuất hiện ít nhất.

Giới hạn
2 <= Độ dài của chuỗi S <= 100
Đảm bảo chuỗi S chỉ chứa các ký tự là chữ số.
Ví dụ
S	return
"112223333"	6
"11111"	10
Giải thích ví dụ #1
Trong "112223333" xuất hiện các chữ số như sau :

1 : 2 số
2 : 3 số
3 : 4 số
Chữ số xuất hiện nhiều nhất là 3, xuất hiện 4 lần. Chữ số xuất hiện ít nhất là 1, xuất hiện 2 lần. Vì vậy trả về giá trị 4 + 2 = 6.

Giải thích ví dụ #2
Trong "11111" xuất hiện các chữ số như sau :

1 : 5 số
Chữ số xuất hiện nhiều nhất là 1, xuất hiện 5 lần. Chữ số xuất hiện ít nhất là 1, xuất hiện 5 lần. Vì vậy trả về giá trị 5 + 5 = 10.
'''
def solution(S):

    DAT = [0 for _ in range(10)]

    for i in range(len(S)):
        digit = int(S[i])
        DAT[digit] += 1

    mincnt = 101
    maxcnt = -1
    
    for i in range(10):
        if DAT[i] == 0:
            ​continue​
        if ​DAT[i] < mincnt​:
            mincnt = DAT[i]
        if DAT[i] > maxcnt:
            ​maxcnt = DAT[i]​
            
    answer = ​mincnt + maxcnt​
    return answer
