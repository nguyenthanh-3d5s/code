'''
Tính toán sự hài lòng tối đa khi thăm nhà hàng
Mô tả
Bạn sẽ thăm các nhà hàng được sắp xếp theo hình tròn xung quanh một hồ nước. Tuy nhiên, bạn không thể thăm các nhà hàng nằm ngay bên cạnh những nhà hàng mà bạn đã thăm. Khi thăm mỗi nhà hàng, bạn sẽ nhận được một mức độ hài lòng được cho theo thứ tự theo chiều kim đồng hồ. Nhiệm vụ của bạn là tìm ra tổng mức độ hài lòng tối đa mà bạn có thể đạt được.

Ví dụ, nếu mức độ hài lòng của các nhà hàng là [5, 8, 5, 2, 3], để đạt được tổng mức độ hài lòng tối đa, bạn cần thăm nhà hàng thứ hai và nhà hàng thứ năm. Tổng mức độ hài lòng lúc này là 11.

Thông tin đầu vào
Mảng satisfactions chứa mức độ hài lòng mà bạn nhận được khi thăm mỗi nhà hàng sẽ được truyền vào hàm solution. Bạn cần viết hàm solution để trả về tổng mức độ hài lòng tối đa có thể đạt được. Tuy nhiên, một phần của mã đã bị sai, vì vậy nó không hoạt động đúng với một số đầu vào. Hãy sửa mã bằng cách chỉ thay đổi một dòng để nó hoạt động đúng với tất cả các đầu vào.

Thông tin tham số
Mảng satisfactions chứa mức độ hài lòng mà bạn nhận được khi thăm mỗi nhà hàng.
Độ dài của satisfactions là từ 3 đến 1,000.
Các phần tử trong satisfactions là các số nguyên từ 0 đến 100.
Thông tin giá trị trả về
Vui lòng trả về tổng mức độ hài lòng tối đa mà bạn có thể đạt được.
Ví dụ
satisfactions	return
[5, 8, 5, 2, 3]	11
Giải thích ví dụ
Như đã mô tả ở trên.
'''
def solution(satisfactions):
    answer = 0
    for start in range(0, 1+1):
        end = len(satisfactions) - 2 if start == 0 else len(satisfactions) - 1
        dp = [0] * len(satisfactions)
        dp[start] = satisfactions[start]
        dp[start+1] = max(satisfactions[start], satisfactions[start+1])
        for restaurant in range(start+2, end+1):
            dp[restaurant] = max(satisfactions[restaurant] + dp[restaurant-2], dp[restaurant-1])
        answer = max(answer, dp[end])
    return answer
