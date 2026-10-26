'''
# time limit
Tính số lần thay đổi của các dãy số
Mô tả bài toán
Bài toán này yêu cầu bạn điền vào các chỗ trống trong mã sao cho thỏa mãn yêu cầu đã cho.

Có 3 dãy số được lặp lại theo thứ tự đã xác định. Nhiệm vụ của bạn là tìm ra số lần nào các dãy số cần thay đổi để tất cả các dãy đều hiển thị cùng một số.

Dưới đây là hình minh họa cho các dãy số đã được xác định.

Dãy số 1 là [1, 4, 5, 3], dãy số 2 là [5, 4], dãy số 3 là [1, 8, 5] sẽ xuất hiện theo thứ tự. Số hiện tại tương ứng với thứ tự được đánh dấu bằng vùng màu xanh.

image 1

Sau một lượt, dãy số tiếp theo sẽ được đánh dấu như hình dưới đây.

image 2

Khi đó, sau một lượt nữa, số 5 sẽ xuất hiện 3 lần trong vùng màu xanh như hình dưới đây.

image 3

Như vậy, với số lượng N, M, K là số lần xuất hiện của các số trong dãy 1, 2, 3, và mảng 2 chiều sequence chứa các số sẽ được hiển thị trong từng cột của dãy số. Hãy hoàn thành hàm solution để tính toán số lần dãy số cần thay đổi để có 3 số giống nhau xuất hiện trong vùng màu xanh.

Tham số
1 ≤ N, M, K ≤ 500
1 ≤ (số sẽ hiển thị trong mỗi dãy) ≤ 10,000
sequence: mảng 2 chiều chứa các số sẽ được hiển thị trong từng cột của dãy số
(Các hàng vượt quá độ dài của dãy số sẽ chứa số nguyên 0.)
Kiểu trả về
Trả về số lần cần thay đổi dãy số để có 3 số giống nhau xuất hiện.
Nếu không thể xuất hiện số giống nhau, trả về -1.
Ví dụ
N	M	K	sequence	return
4	2	3	[[1, 5, 1], [4, 4, 8], [5, 0, 5], [1, 0, 0]]	2
4	4	4	[[1, 2, 3], [2, 3, 4], [3, 4, 1], [4, 1, 2]]	-1
Giải thích ví dụ
Ví dụ 1
Giống như mô tả ở trên.

Ví dụ 2
Dãy số 1 là [1, 2, 3, 4], dãy số 2 là [2, 3, 4, 1], dãy số 3 là [3, 4, 1, 2] sẽ xuất hiện theo thứ tự. Dù có thay đổi thứ tự như thế nào, việc xuất hiện số giống nhau là không thể, do đó trả về -1.
'''
def solution(N,  M,  K,  sequence):
    if (sequence[0][0] == sequence[0][1] and sequence[0][1] == sequence[0][2]):
        return 0
    
    a = 1 % N
    b = 1 % M
    c = 1 % K
    count = 1
    
    while (not (a == 0 and b == 0 and c == 0)):
        if (sequence[a][0] == sequence[b][1] and sequence[b][1] == sequence[c][2]):
            return count
        a = ​(a + 1) % N​
        b = ​(b + 1) % M​
        c = ​(c + 1) % K​
        count += 1

    return -1
