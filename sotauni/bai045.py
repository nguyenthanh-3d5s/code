'''
Tính diện tích lớn nhất của hình chữ nhật từ các điểm trên mặt phẳng tọa độ
Mô tả bài toán
Cho tọa độ của các điểm trên mặt phẳng tọa độ. Nhiệm vụ của bạn là tìm diện tích lớn nhất của hình chữ nhật có thể được tạo ra bằng cách nối bốn điểm khác nhau.

Ví dụ, với các điểm [1, 2], [1, 4], [3, 2], [4, 2], [3, 5], [4, 4], [4, 5], bạn có thể tạo ra hình chữ nhật có diện tích 6 từ các điểm [1, 2], [1, 4], [4, 2], [4, 4] và hình chữ nhật có diện tích 3 từ các điểm [3, 2], [3, 5], [4, 2], [4, 5]. Do đó, diện tích lớn nhất của hình chữ nhật là 6.

Hình minh họa

Yêu cầu
Hàm solution nhận vào một mảng points chứa tọa độ của các điểm trên mặt phẳng tọa độ. Bạn cần hoàn thành hàm solution để trả về diện tích lớn nhất của hình chữ nhật có thể được tạo ra từ bốn điểm khác nhau. Lưu ý rằng các cạnh của hình chữ nhật phải song song với trục x hoặc trục y.

Thông tin tham số
Mảng points chứa tọa độ của các điểm trên mặt phẳng tọa độ.
Độ dài của points là một số tự nhiên từ 4 đến 100.
Các phần tử trong points có định dạng [x tọa độ, y tọa độ].
x tọa độ và y tọa độ là các số tự nhiên từ 1 đến 1,000.
Không có phần tử nào trong points bị trùng lặp.
Không có trường hợp nào mà không thể tạo ra hình chữ nhật.
Thông tin giá trị trả về
Trả về diện tích lớn nhất của hình chữ nhật có thể được tạo ra từ bốn điểm khác nhau.

Ví dụ
points	return
[[1, 2], [1, 4], [3, 2], [4, 2], [3, 5], [4, 4], [4, 5]]	6
[[2, 1], [2, 2], [2, 4], [4, 2], [4, 4], [3, 3]]	4
Giải thích ví dụ
Ví dụ #1

Giống như ví dụ đã nêu ở trên.
Ví dụ #2

Bạn có thể tạo ra hình chữ nhật có diện tích 4 từ các điểm [2, 2], [2, 4], [4, 2], [4, 4]. Do đó, hàm trả về 4.
'''
def solution(points):
    point_set = set(map(tuple, points))
    max_area = 0
    n = len(points)
    for i in range(n):
        x1, y1 = points[i]
        for j in range(i + 1, n):
            x2, y2 = points[j]
            if x1 != x2 and y1 != y2:
                if (x1, y2) in point_set and (x2, y1) in point_set:
                    area = abs(x1 - x2) * abs(y1 - y2)
                    if area > max_area:
                        max_area = area
    return max_area
