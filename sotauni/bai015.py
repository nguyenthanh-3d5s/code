'''
Đếm số lượng số nguyên tố
Vấn đề mô tả
Vấn đề này yêu cầu bạn điền vào các chỗ trống trong mã sao cho đáp ứng các yêu cầu đã cho.

Số nguyên tố là số tự nhiên chỉ chia hết cho 1 và chính nó. Trong trường hợp này, 1 không phải là số nguyên tố.

Sàng Eratosthenes là một thuật toán tìm số nguyên tố bằng cách loại bỏ các số không phải là số nguyên tố từ dãy số tự nhiên được sắp xếp theo thứ tự.

Khi có một dãy số nguyên từ 1 đến 30, quá trình tìm số nguyên tố diễn ra như sau: (Các số bị loại bỏ được đánh dấu bằng màu xám và các số được xác nhận là số nguyên tố được đánh dấu bằng màu xanh)

Đầu tiên, 1 không phải là số nguyên tố nên bị loại bỏ.

![IMAGE_1]

Tiếp theo, 2 là số nguyên tố và các bội số của 2 (trừ 2) không phải là số nguyên tố nên bị loại bỏ.

![IMAGE_2]

Tiếp theo, 3 là số nguyên tố nên các bội số của 3 (trừ 3) sẽ bị loại bỏ.

![IMAGE_3]

Bây giờ, số nhỏ nhất chưa được xác nhận là 5, và không có số nguyên nào lớn hơn 1 chia hết cho 5, vì vậy 5 là số nguyên tố. Loại bỏ các bội số của 5 (trừ 5).

![IMAGE_4]

Số nhỏ nhất chưa được xác nhận tiếp theo là 7 và 7 là số nguyên tố. Lặp lại quá trình này để xác nhận các số còn lại chưa bị loại bỏ, bạn có thể tìm tất cả các số nguyên tố dưới 30.

![IMAGE_5]

Hàm solution là một hàm nhận đầu vào là một số nguyên N và trả về số lượng số nguyên tố trong các số tự nhiên không vượt quá N.

Mảng nums biểu thị xem một số nguyên có bị xóa hay không, với chỉ số và giá trị tương ứng. Nếu số nguyên tại chỉ số đó bị xóa, giá trị sẽ là true, nếu không bị xóa, giá trị sẽ là false.

Hãy hoàn thành hàm solution bằng cách điền vào các chỗ trống.

Tham số
N (1 ≤ N ≤ 1,000,000)
Kiểu trả về
Trả về số lượng số nguyên tố trong các số tự nhiên không vượt quá N.
Ví dụ
N	return
30	10
12	5
Giải thích ví dụ
Ví dụ 1
Giống như mô tả ở trên.

Ví dụ 2
Các số nguyên tố không vượt quá 12 là 2, 3, 5, 7, 11, tổng cộng 5 số.
'''
def solution(N):
    nums = [False] * (N + 1)

    answer = 0
    nums[0] = nums[1] = ​True​

    for n in range(2, N + 1):
        if ​nums[n]​:
            continue
        answer += 1
        for multiple in range(n + n, N + 1, n):
            nums[multiple] = ​True​

    return answer
