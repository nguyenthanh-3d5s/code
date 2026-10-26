'''
Tính điểm cho trò chơi bowling đặc biệt
Tính điểm cho trò chơi bowling đặc biệt
Chúng ta sẽ tính điểm cho một trò chơi bowling đặc biệt. Quy tắc trò chơi như sau:

Một trò chơi gồm n vòng.
Điểm số được tính dựa trên số pin bị đổ.
Ở vòng tiếp theo sau khi đổ tất cả 10 pin, điểm số sẽ là gấp đôi số pin bị đổ.
Ví dụ, nếu bạn ném bóng 5 lần và đổ được 5, 10, 10, 6, 1 pin thì tổng điểm sẽ là 5 + 10 + (10 * 2) + (6 * 2) + 1 = 48 điểm.

Khi một mảng pins chứa số pin bị đổ theo từng vòng được truyền vào hàm solution, hãy viết hàm solution để trả về tổng điểm đạt được. Hãy điền vào chỗ trống để hoàn thành toàn bộ mã.

Mô tả tham số
Mảng pins chứa số pin bị đổ theo từng vòng sẽ được truyền vào hàm solution.

Độ dài của pins là một số nguyên từ 3 đến 50.
Các phần tử của pins là các số nguyên từ 0 đến 10.
Mô tả giá trị trả về
Hãy trả về tổng điểm đạt được.

Ví dụ
pins	return
[5, 10, 10, 6, 1]	48
Mô tả ví dụ
Giống như ví dụ đã nêu ở trên.
'''
def solution(pins):
    answer = 0
    previous = 0
    for score in pins:
        if previous == ​10​:
            answer += ​score * 2​
        else:
            answer += score
        previous = score
    return answer
