'''
Thuật toán sắp xếp hợp nhất
Mô tả câu hỏi
Dưới đây là bài toán yêu cầu điền vào chỗ trống trong code cơ bản sao cho thỏa mãn yêu cầu.

Sắp xếp là quá trình liệt kê một tập dữ liệu theo thứ tự tăng dần, giảm dần hoặc theo cách mà người dùng định nghĩa sao cho có ý nghĩa. Ngoài ra, có rất nhiều thuật toán khác nhau để thực hiện việc sắp xếp, trong đó ta sẽ triển khai thuật toán sắp xếp hợp nhất. Để giải quyết một vấn đề, ta luôn phải chia nhỏ nó thành những đơn vị nhỏ hơn và giải quyết từng phần, từ đó mới có thể giải quyết được vấn đề lớn. Đây được gọi là ‘chia để trị’. Thuật toán sắp xếp hợp nhất là thuật toán sử dụng khái niệm ‘chia để trị’, chia tập dữ liệu thành hai phần, sắp xếp chúng và sau đó kết hợp lại thành một tập dữ liệu đã được sắp xếp. Hãy cùng quan sát ví dụ sau.

Tên biến	Giải thích
numCount	Độ dài của tập dữ liệu
numList	Tập dữ liệu chưa được sắp xếp
[Bảng 1]

Tên biến	Giá trị
numCount	7
numList	[1, 6, 3, 4, 2, 0, 10]
[Bảng 2]

image 1
[Hình1]

Cho tập dữ liệu [1, 6, 3, 4, 2, 0, 10], sau khi sắp xếp theo thứ tăng dần sẽ trở thành [0, 1, 2, 3, 4, 6, 10].

Thuật toán sắp xếp hợp nhất sử dụng khái niệm ‘chia để trị’ nên tập dữ liệu trong [Hình 1] sẽ được chia thành hai phần.

image 2
[Hình2]

Đây là tình huống khi tập dữ liệu trong [Hình 1] được chia thành hai phần. Vì số lượng dữ liệu là 7, nên sẽ có một bên có thể có nhiều hơn một phần tử.

Trong [Hình 2], tập dữ liệu được chia thành [1, 6, 3, 4] và [2, 0, 10], mỗi phần sẽ tiếp tục được chia thành hai phần nhỏ hơn.

image 3
[Hình3]

Như [Hình3] được chia thành 4 tập dữ liệu là [1, 6], [3, 4], [2, 0], [10]. Tuy nhiên vẫn còn tồn tại dữ liệu có thể chia thêm.

image 4
[Hình4]

Như [Hình4], không còn tồn tại tập dữ liệu nào có thể chia thêm. Giờ đây sẽ tiến hành sắp xếp tại từng tập dữ liệu. Hiện tại tập dữ liệu đã được chia thành 1 ô rồi nên không cần sắp xếp nữa, vì vậy tập dữ liệu sẽ được hợp lại như [Hình5].

image 5
[Hình5]

Như [Hình5] các tập dữ liệu[1, 6], [3, 4], [10] đã được sắp xếp theo thứ tự tăng dần, nhưng tập [2, 0] vẫn chưa được sắp xếp theo thứ tự tăng dần. Tiến hành sắp xếp tập dữ liệu [2, 0] theo thứ tự tăng dần và kết quả sắp xếp khi hoàn tất sẽ như [Hình6].

image 6
[Hình6]

image 7
[Hình7]

Giờ đây, hợp nhất[1, 6], [3, 4] lại và [0, 2], [10] cũng được hợp nhất lại với nhau. Nếu hợp nhất các tập dữ liệu thì có 2 tập dữ liệu được tạo thành là[1, 6, 3, 4], [0, 2, 10]. Tập dữ liệu [1, 6, 3, 4]chưa được sắp xếp theo thứ tự tăng dần nên sẽ tiến hành sắp xếp lại theo thứ tự tăng dần.

image 8
[Hình8]

Như [Hình8], 2 tập dữ liệu [1, 3, 4, 6], [0, 2, 10] đã được hoàn thành. Lại hợp nhất 2 tập dữ liệu như ở [Hình9]thành 1 tập dữ liệu duy nhất.

image 9
[Hình9]

image 10
[Hình10]

Hiện tại 2 tập dữ liệu[1, 3, 4, 6] và [0, 2, 10] đã được hợp nhất và hoàn thành tập dữ liệu [0, 1, 2, 3, 4, 6, 10]như [Hình10]. Mục tiêu là sắp xếp tập dữ liệu chứa số tự nhiên bất kỳ theo thứ tự tăng dần, và trả về giá trị tại vị trí được tính bằng cách chia numCount cho 2

Các tham số đầu vào
1 <= Số lượng các tập dữ liệu (numCount) <= 100
1 <= Phạm vi dữ liệu <= 2,147,483,647
Kiểu trả về
Giá trị tại vị trí được tính bằng cách chia numCount cho 2 trong tập dữ liệu đã sắp xếp theo thứ tự tăng dần
Ví dụ
numCount
7
20
Ví dụ 1 : Nếu sắp xếp tổ hợp [1, 6, 3, 4, 2, 0, 10] theo thứ tự tăng dần thì ta sẽ có [0, 1, 2, 3, 4, 6, 10] và khi lấy 7 chia cho 2 thì vị trí thứ 3 (index của mảng) của tập này sẽ là 3.
Ví dụ 2 : Nếu sắp xếp tổ hợp [164, 41, 173, 149, 59, 48, 168, 42, 6, 130, 102, 76, 10, 54, 49, 56, 77, 183, 53, 55] theo thứ tự tăng dần thì ta sẽ có [6, 10, 41, 42, 48, 49, 53, 54, 55, 56, 59, 76, 77, 102, 130, 149, 164, 168, 173, 183] và khi lấy 10 chia cho 2 thì vị trí thứ 5 (index của mảng) của tập này sẽ là 59.
'''
