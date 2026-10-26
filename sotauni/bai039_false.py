'''
Kiểm tra khả năng tạo số nguyên tố từ mảng số
Mô tả
Khi một mảng số được cho, chúng ta sẽ kiểm tra xem có thể tạo ra số nguyên tố* từ các số trong mảng hay không. Quy tắc tạo số như sau:

Tất cả các số được cho phải được sử dụng một lần.
Mỗi số có thể được cộng hoặc trừ.
Ví dụ, với mảng số [1, 1, 2, 3], ta có thể kết hợp để tạo ra số nguyên tố như 1 + 1 + 2 + 3 = 7 hoặc 1 + 1 - 2 + 3 = 3.

Để thực hiện điều này, tôi đã viết một chương trình với cấu trúc như sau:

Tìm tất cả các số nguyên tố.
Tìm tất cả các số có thể tạo ra từ các số đã cho.
Kiểm tra xem có số nào trùng giữa kết quả ở bước 1 và bước 2 hay không.
Mảng số numbers sẽ được truyền vào như là tham số của hàm solution. Nếu có thể tạo ra số nguyên tố từ các số trong mảng theo quy tắc trên, hàm sẽ trả về true, nếu không sẽ trả về false. Hãy hoàn thành hàm solution bằng cách điền các tham số và hàm func_a, func_b, func_c vào chỗ trống sao cho mã hoạt động đúng.

Giải thích tham số
Mảng số numbers được truyền vào như là tham số của hàm solution.

Độ dài của numbers là từ 1 đến 20.
Các phần tử của numbers là các số tự nhiên từ 1 đến 5,000.
Giải thích giá trị trả về
Hãy trả về true nếu có thể tạo ra số nguyên tố từ các số trong mảng theo quy tắc trên, và false nếu không thể.

Ví dụ
numbers	return
[1, 1, 2, 3]	true
[1, 7]	false
Giải thích ví dụ
Ví dụ #1

Như đã giải thích ở trên.
Ví dụ #2

Không có cách nào để tạo ra số nguyên tố, vì vậy trả về false.
Số nguyên tố: Số nguyên tố là số tự nhiên lớn hơn 1 chỉ chia hết cho 1 và chính nó.
'''
