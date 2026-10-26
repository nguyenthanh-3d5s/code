'''
Bài toán hoàn thành sa mạc
Mô tả bài toán
Bài toán này yêu cầu bạn viết hàm solution để thỏa mãn yêu cầu đã cho.

Trên một bàn chơi có kích thước 7 ô ngang và 7 ô dọc, việc đặt 4 viên đá liên tiếp theo chiều ngang hoặc chiều dọc được gọi là sa mạc.

Dưới đây là ví dụ về hình dạng của các viên đá đã được đặt.

image 1

Nhìn vào đường màu cam, có 4 viên đá liên tiếp theo chiều chéo, nhưng trong sa mạc, chiều chéo không được tính. Nhìn vào đường màu xanh, có 4 viên đá liên tiếp theo chiều ngang ở hàng 1, vì vậy đó là sa mạc.

Khi hình dạng của các viên đá trên bàn chơi được cho dưới dạng mảng 2 chiều board, bạn cần thêm một số viên đá vào vị trí tùy ý để hoàn thành sa mạc.

Nếu các viên đá được đặt như hình dưới đây,

image 2

Thêm 2 viên đá vào ô (1, 2) và (1, 3) sẽ hoàn thành sa mạc.

image 3

Ngoài ra, nếu bạn đặt 2 viên đá vào ô (2, 5) và (3, 5), bạn cũng sẽ hoàn thành sa mạc.

image 4

Khi hình dạng của các viên đá trên bàn chơi được cho, hãy hoàn thành hàm solution để trả về số lượng viên đá tối thiểu cần thêm để hoàn thành sa mạc.

Tham số
board là mảng 2 chiều kích thước 7 x 7, đại diện cho hình dạng của các viên đá trên bàn chơi.
Ý nghĩa của các số nguyên như sau:
0: ô trống
1: ô có viên đá
Kiểu trả về
Trả về số lượng viên đá tối thiểu cần thêm để hoàn thành sa mạc.
Ví dụ
board	return
[[0, 0, 0, 0, 0, 0, 0],	
[0, 0, 1, 0, 0, 1, 0],	
[0, 0, 0, 0, 0, 0, 0],	
[0, 0, 0, 0, 0, 0, 0],	
[0, 0, 0, 0, 0, 1, 0],	
[0, 0, 0, 0, 0, 0, 0],	
[0, 0, 0, 0, 0, 0, 0]]	2
[[0, 0, 0, 0, 0, 0, 0],	
[0, 0, 1, 0, 0, 0, 0],	
[0, 0, 0, 0, 0, 0, 0],	
[0, 0, 0, 0, 0, 0, 0],	
[0, 0, 0, 0, 0, 0, 0],	
[0, 0, 0, 0, 0, 0, 0],	
[0, 0, 0, 0, 0, 0, 0]]	3
Giải thích ví dụ
Ví dụ 1
Giống như mô tả ở trên.

Ví dụ 2
Bởi vì có một viên đá trên bàn chơi, bạn cần thêm 3 viên đá nữa để hoàn thành sa mạc. Không thể hoàn thành sa mạc với ít hơn 3 viên đá.
'''
def solution(board):
    total = sum(sum(row) for row in board)
    if total == 0:
        return 4
    best = 4
    for r in range(7):
        for c in range(7):
            if c + 3 < 7:
                cnt = board[r][c] + board[r][c+1] + board[r][c+2] + board[r][c+3]
                if cnt >= 1:
                    need = 4 - cnt
                    if need < best:
                        best = need
            if r + 3 < 7:
                cnt = board[r][c] + board[r+1][c] + board[r+2][c] + board[r+3][c]
                if cnt >= 1:
                    need = 4 - cnt
                    if need < best:
                        best = need
    return best
