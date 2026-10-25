'''
Đếm số lượng hình chữ nhật có diện tích n
Mô tả
Bạn cần tìm số lượng hình chữ nhật có chiều dài và chiều rộng là số tự nhiên và có diện tích bằng n. Lưu ý rằng chiều dài của hình chữ nhật phải bằng hoặc nhỏ hơn chiều rộng.

Ví dụ
Ví dụ, hình chữ nhật có diện tích 4 như hình dưới đây có 2 hình.

Hình minh họa

Hàm solution sẽ nhận diện tích n làm tham số. Bạn hãy hoàn thành hàm solution để trả về số lượng hình chữ nhật có chiều dài và chiều rộng là số tự nhiên và có diện tích n.

Thông tin tham số
Diện tích hình chữ nhật n được truyền vào hàm solution.
n là số tự nhiên từ 1 đến 100,000.
Thông tin giá trị trả về
Vui lòng trả về số lượng hình chữ nhật có chiều dài và chiều rộng là số tự nhiên và có diện tích n.
Ví dụ
n	result
4	2
15	2
Giải thích ví dụ
Ví dụ #1
Như đã mô tả ở trên.

Ví dụ #2
Các cặp chiều dài và chiều rộng có thể là (1, 15), (3, 5) tổng cộng có 2 cặp.
'''
from math import *

def solution(n):
    answer = 0
    for i in range(1, isqrt(n) + 1):
        if n % i == 0:
            answer += 1
    return answer
