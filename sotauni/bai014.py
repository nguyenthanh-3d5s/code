'''
Tính số cách xếp hàng cho sinh viên
Vấn đề mô tả
Vấn đề này yêu cầu bạn điền vào các khoảng trống trong mã để đáp ứng các yêu cầu đã cho.

Thời gian giải trí trong buổi chào đón tân sinh viên của Đại học Đại Hàn. Sinh viên sẽ nhảy múa theo nhạc, và khi nhạc dừng lại, như hình dưới đây, họ sẽ tạo thành nhóm 1 hoặc 2 người và đứng thành hàng.

Khi số sinh viên N được cho, hãy điền vào khoảng trống trong hàm solution để xuất ra số cách kết hợp có thể của các nhóm đứng thành hàng.

(Lưu ý rằng không cần quan tâm đến ai là thành viên của nhóm, chỉ cần xem xét nhóm 1 người hay nhóm 2 người.)

Hình ảnh

Tham số
Tham số N đại diện cho số sinh viên tham gia giải trí, là một biến số nguyên từ 3 đến 99.
Kiểu trả về
answer: là một biến số nguyên lớn hơn hoặc bằng 1, đại diện cho số cách kết hợp có thể của N sinh viên tạo thành nhóm 1 hoặc 2 người đứng thành hàng.
Ví dụ
N	answer
3	3
4	5
N = 3: Hiện tại có 3 sinh viên tham gia giải trí.
Tất cả các trường hợp mà 3 sinh viên tạo thành nhóm 1 hoặc 2 người đứng thành hàng.
Trường hợp 1: 3 sinh viên tạo thành 3 nhóm 1 người.
Trường hợp 2: Hàng đầu tiên có nhóm 1 người, hàng thứ hai có nhóm 2 người.
Trường hợp 3: Hàng đầu tiên có nhóm 2 người, hàng thứ hai có nhóm 1 người.
Giải thích giá trị đầu ra
Tổng số trường hợp là 3, vì vậy lưu 3 vào answer và xuất ra.
Giải thích ví dụ
Ví dụ #1 Giống như mô tả ở trên.

Ví dụ #2 Tất cả các trường hợp mà 4 sinh viên tạo thành nhóm 1 hoặc 2 người đứng thành hàng.

Trường hợp 1: 1 sinh viên tạo thành nhóm 1 người.
Trường hợp 2: Hàng đầu tiên có nhóm 1 người, hàng thứ hai có nhóm 1 người, hàng thứ ba có nhóm 2 người.
Trường hợp 3: Hàng đầu tiên có nhóm 1 người, hàng thứ hai có nhóm 2 người, hàng thứ ba có nhóm 1 người.
Trường hợp 4: Hàng đầu tiên có nhóm 2 người, hàng thứ hai có nhóm 1 người, hàng thứ ba có nhóm 1 người.
Trường hợp 5: Hàng đầu tiên có nhóm 2 người, hàng thứ hai có nhóm 2 người.
Tổng cộng có 5 trường hợp.
'''
def solution(N):
    answer = 0
    
    cases = [0] * N
    
    cases[0] = 1
    cases[1] = 2
    
    for i in range(2, N):
        cases[i] = cases[​i - 1​] + cases[​i - 2​]

    answer = cases[​N - 1​]
    
    return answer
