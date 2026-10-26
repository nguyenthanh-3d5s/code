'''
Tìm chiều dài cột gỗ dài nhất
Vấn đề mô tả
Chiều dài N của một số cột gỗ đã bị mục nát, không thể sử dụng toàn bộ cột nữa.

Chúng ta sẽ cắt bỏ phần mục nát và tái chế phần còn lại.

Chúng ta muốn tìm chiều dài của cột dài nhất có thể tạo ra từ việc tái chế.

Ví dụ, có thể có một cột gỗ như hình dưới đây. 1 là phần mục nát, 0 là phần không mục nát.

image 1

Sau khi cắt bỏ phần mục nát, cột sẽ được chia thành 3 phần, và chiều dài của cột bên trái nhất là 3, là chiều dài lớn nhất.

image 2

Khi được cho chiều dài cột ban đầu N và một mảng một chiều pillar thể hiện trạng thái của cột gỗ, chúng ta sẽ viết hàm solution để trả về chiều dài của cột dài nhất. Hãy điền vào chỗ trống để hoàn thành mã.

Mô tả tham số
N (1 ≤ N ≤ 10)
pillar: mảng một chiều thể hiện trạng thái của cột gỗ
1 là phần mục nát, 0 là phần không mục nát.
Có ít nhất một phần mục nát, và có thể có trường hợp tất cả các phần đều mục nát.
Mô tả giá trị trả về
Trả về chiều dài của cột dài nhất có thể tạo ra từ việc tái chế.
Ví dụ
N	pillar	return
8	[0, 0, 0, 1, 0, 1, 0, 0]	3
8	[0, 1, 0, 0, 0, 0, 0, 0]	6
Ví dụ 1: Giống như mô tả ở trên.
Ví dụ 2: Có thể sử dụng vùng từ chỉ số 2 đến 7 để tạo ra cột dài nhất với chiều dài là 6.
'''
def solution(N,  pillar):
    maxLength = -1 
    length = 0 

    for i in range(N):
        if ​pillar[i] == 0​:
            length += 1
        else:
            maxLength = max(maxLength, ​length​) 
            ​length = 0​ 
    ​maxLength = max(maxLength, length)​ 

    return maxLength
