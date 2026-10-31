'''
Kiểm tra ma trận kỳ ảo
| Mô tả câu hỏi

Dưới đây là bài toán yêu cầu chỉnh sửa code cơ bản sao cho thỏa mãn yêu cầu. Ma trận kỳ ảo là một mảng hình vuông đặc biệt mà tất cả tổng theo chiều ngang, chiều dọc, đường chéo của các số nằm bên trong đều bằng nhau.

image 1

[Hình1]

Mảng 2 chiều trên có tổng của tất cả các hàng, cột, hai đường chéo đều bằng 15. Chính vì tính chất này nên mảng 2 chiều trên được công nhận là một ma trận kỳ ảo. Hàm kiểm tra ma trận kỳ ảo sẽ tính tổng theo chiều ngang, tổng theo chiều dọc, tổng theo đường chéo phía trên bên trái, tổng theo đường chéo phía trên bên phải để kiểm tra xem các tổng có bằng nhau không. Nếu thỏa mãn tất cả điều kiện thì trả về giá trị True, nếu không thỏa mãn thì trả về giá trị False. Ta có thể sử dụng hàm này và dễ dàng kiểm tra xem đó có phải là ma trận kỳ ảo hay không.

Tính tổng (tổng của hàng đầu tiên) của một hàng bất kỳ trong ma trận đã cho. Sau đó lưu giá trị tổng đó và một biến.
Tính tổng của từng hàng trong ma trận và so sánh xem tất cả các tổng đó có bằng nhau hay không. Dù chỉ có một hàng có tổng khác thì đây cũng không phải là ma trận kỳ ảo nên sẽ trả về False.
Tính tổng của từng cột trong ma trận và so sánh xem tất cả các tổng đó có bằng nhau hay không. Dù chỉ có một cột có tổng khác thì đây cũng không phải là ma trận kỳ ảo nên sẽ trả về False.
Tính tổng của đường chéo phía trên bên trái và so sánh xem có bằng nhau hay không. Nếu có tổng khác thì đây không phải là ma trận kỳ ảo nên sẽ trả về False.
Tính tổng của đường chéo phía trên bên phải và so sánh xem có bằng nhau hay không. Nếu có tổng khác thì đây không phải là ma trận kỳ ảo nên sẽ trả về False.
Nếu thỏa mãn tất cả các điều kiện trên thì trả về True.
Biến số	Ý nghĩa	Giá trị
matrix	Mảng 2 chiều hình vuông	[[2, 7, 6], [9, 5, 1], [4, 3, 8]]
n	Độ dài của một cạnh trong mảng	3
Cần chỉnh sửa một dòng duy nhất trong code.

| Các tham số đầu vào

1 <= Giá trị phần tử matrix <= 100,000
3 <= n <= 10
| Kiểu trả về

Giá trị Boolean thể hiện mảng 2 chiều hình vuông đã cho (matrix) có phải là ma trận kỳ ảo hay không.
Nếu mảng 2 chiều đã input là ma trận kỳ ảo thì trả về True, nếu không phải là ma trận kỳ ảo thì trả về False.
| Ví dụ

matrix	n	return
[[2, 7, 6], [9, 5, 1], [4, 3, 8]]	3	True
[[16, 3, 2, 13], [5, 10, 11, 8], [9, 6, 7, 12], [4, 15, 14, 1]]	4	True
[[15, 24, 7, 20, 16], [4, 12, 25, 8, 3], [17, 5, 13, 21, 9], [10, 18, 1, 14, 22], [23, 6, 19, 2, 11]]	5	False

'''
def solution(matrix, n):
    target_sum = 0
    for i in range(n):
        target_sum += matrix[0][i]

    for i in range(n):
        row_sum = 0
        for j in range(n):
            row_sum += matrix[i][j]
        if row_sum != target_sum:
            return False

    for j in range(n):
        col_sum = 0
        for i in range(n):
            col_sum += matrix[i][j]
        if col_sum != target_sum:
            return False

    diag1_sum = 0
    for i in range(n):
        diag1_sum += matrix[i][i]
    if diag1_sum != target_sum:
        return False

    diag2_sum = 0
    for i in range(n):
        diag2_sum += matrix[i][n - i - 1]
    if diag2_sum != target_sum:
        return False

    return True
