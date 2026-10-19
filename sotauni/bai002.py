'''
Đếm số lần A quân mua sữa
Mô tả
A quân đi đến siêu thị mỗi ngày để mua sữa. A quân có tiêu chí để mua sữa như sau:

Nếu giá sữa thấp hơn giá tiêu chuẩn, A quân sẽ mua sữa.
Nếu giá sữa bằng hoặc cao hơn giá tiêu chuẩn, A quân sẽ không mua sữa. Nếu trong 3 ngày liên tiếp không mua được sữa, vào ngày tiếp theo A quân sẽ mua sữa bất kể giá cả.
A quân muốn tính số lần mua sữa của mình dựa trên các tiêu chí trên.

Ví dụ, nếu giá sữa theo thứ tự ngày là [1200, 900, 850, 1100, 1100, 1100, 1300] và giá tiêu chuẩn là 1000, A quân đã mua sữa 3 lần với giá [900, 850, 1300].

Hãy viết hàm solution để trả về số lần A quân đã mua sữa khi được cung cấp một mảng giá sữa theo thứ tự ngày cost và giá tiêu chuẩn base.

Thông tin tham số
Mảng cost chứa giá sữa theo thứ tự ngày, và giá tiêu chuẩn base được cung cấp làm tham số.

Các phần tử trong cost là các số tự nhiên từ 100 đến 2000.

base là một số tự nhiên không vượt quá 2000.

Thông tin giá trị trả về
Vui lòng trả về số lần A quân đã mua sữa.
Ví dụ
cost	base	return
[1200, 900, 850, 1100, 1100, 1100, 1300]	1000	3
Giải thích ví dụ
Ví dụ trên tương tự như đã mô tả trước đó.
'''
