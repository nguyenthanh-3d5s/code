'''
Xác định hướng của đường thẳng trên mặt phẳng tọa độ
Mô tả
Để biểu diễn điểm và đường thẳng trên mặt phẳng tọa độ, chúng ta đã viết các lớp Point và Line như sau.

Point

Point: Là lớp biểu diễn một điểm trên mặt phẳng tọa độ.
x: Biểu diễn tọa độ x của điểm.
y: Biểu diễn tọa độ y của điểm.
Line

Line: Là lớp biểu diễn một đường thẳng.
points: Biểu diễn hai điểm tạo thành đường thẳng.
is_horizontal(): Trả về giá trị cho biết đường thẳng nối các điểm trong points có song song với trục x hay không.
is_vertical(): Trả về giá trị cho biết đường thẳng nối các điểm trong points có song song với trục y hay không.
Hai điểm trên mặt phẳng tọa độ được liệt kê trong biến points sẽ được truyền vào hàm solution. Nếu đường thẳng nối các điểm trong points song song với trục x, hàm sẽ trả về 0; nếu song song với trục y, hàm sẽ trả về 1; nếu không, hàm sẽ trả về 2. Hãy hoàn thành mã code bằng cách điền vào các chỗ trống trong đoạn mã đã cho dựa trên cấu trúc lớp ở trên.

Mô tả tham số
Biến points chứa tọa độ x và y của hai điểm trên mặt phẳng tọa độ sẽ được truyền vào hàm solution.

points có độ dài là 2.
Các phần tử của points có định dạng [x tọa độ, y tọa độ].
x tọa độ và y tọa độ là các số nguyên trong khoảng từ -1,000 đến 1,000.
Mô tả giá trị trả về
Hãy trả về 0 nếu đường thẳng nối các điểm trong points song song với trục x, 1 nếu song song với trục y, và 2 nếu không.

Ví dụ
points	return
[[2, 2], [-1, 2]]	0
[[-1, 2], [-1, -1]]	1
[[-1, -1], [2, 2]]	2
Giải thích ví dụ
Ví dụ #1 Khi biểu diễn đường thẳng nối các điểm trong points trên mặt phẳng tọa độ, ta có:

Đường thẳng nối các điểm trong points song song với trục x, vì vậy trả về 0.

Ví dụ #2 Khi biểu diễn đường thẳng nối các điểm trong points trên mặt phẳng tọa độ, ta có:

Đường thẳng nối các điểm trong points song song với trục y, vì vậy trả về 1.

Ví dụ #3 Khi biểu diễn đường thẳng nối các điểm trong points trên mặt phẳng tọa độ, ta có:

Đường thẳng nối các điểm trong points không song song với trục x và y, vì vậy trả về 2.
'''
class Point:
    def __init__(self):
        self.x = 0
        self.y = 0

    def __init__(self, x, y):
        self.x = x
        self.y = y


class Line:
    def __init__(self):
        self.points = []

    def __init__(self, points):
        self.points = points

    def is_horizontal(self):
        return self.points[0].y == self.points[1].y

    def is_vertical(self):
        return self.points[0].x == self.points[1].x

def solution(points):
    answer = 0
    
    a = Point(​points[0][0], points[0][1]​)
    b = Point(​points[1][0], points[1][1]​)
    
    line = Line([​a, b​])

    if line.is_horizontal():
        answer = 0
    elif line.is_vertical(): 
        answer = 1
    else:
        answer = 2

    return answer
