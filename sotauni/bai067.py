'''
Tìm thời gian dài nhất của đồng hồ cát
Cho đồng hồ cát có khuôn như hình dạng phía dưới.
Khuôn đồng hồ cát

Thời gian mà một đồng hồ cát có thể biểu thị là tổng của các giá trị nằm bên trong chiếc đồng hồ đó.

Ví dụ, ta có mảng với kích thước 6 x 6 như sau:

Mảng ví dụ

Ở trên, thời gian dài nhất mà đồng hồ cát này có thể biểu thị là 28 giây.

Giải thích

Chỉ sửa một dòng trong code đã cho và hoàn thiện hàm solution trả về mốc thời gian của chiếc đồng hồ cát có thể biểu thị khoảng thời gian dài nhất trong mảng 6 x 6.

Giới hạn
Độ dài chiều ngang của MAP = 6
Độ dài chiều dọc của MAP = 6
-9 <= Số nguyên thuộc mảng <= 9
Ví dụ
MAP	return
[[-9, -9, -9, 1, 1, 1], [0, -9, 0, 4, 3, 2], [-9, -9, -9, 1, 2, 3], [0, 0, 8, 6, 6, 0], [0, 0, 0, -2, 0, 0], [0, 0, 1, 2, 4, 0]]	28
Giải thích ví dụ
Tương tự ví dụ đã cho ở câu trên.
'''
def solution(MAP):

    answer = -2134567890 

    ydir = [0, 0, 0, 1, 2, 2, 2]
    xdir = [0, 1, 2, 1, 0, 1, 2]

    row = 6
    col = 6

    for i in range(0, 4):
        for j in  range(0, 4): 
            time = 0 
            for k in range(7):
                ny, nx = ydir[k], xdir[k]
                if ny < 0 or nx < 0 or ny >= 6 or nx >= 6:
                    continue
                time += MAP[i + ny][j + nx] 
                
            if time > answer:
                answer = time

    return answer
