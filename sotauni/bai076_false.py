'''
Điều chỉnh đường ống nước
Mô tả câu hỏi
Năm nay dự báo mùa hè sẽ có nhiều mưa. Vì vậy để ứng phó trước, ta cần tìm ra các đường ống nước đang lắp đặt sai và điều chỉnh lại cho đúng. Tổng cộng có 7 loại đường ống nước như dưới đây. Dựa theo mã số đã cho, mỗi loại sẽ có hình dáng khác nhau.

Hình 1
[Hình 1]

Việc ta cần phải làm là điều chỉnh lại tối đa M đường ống đang bị lắp sai bằng cách xoay chúng lại để nước có thể chảy ra đúng cách. Nếu xoay đường ống loại số 1 thì có thể biến nó thành đường ống loại số 2, và nếu xoay đường ống loại số 2 thì cũng có thể biến nó thành đường ống loại số 1. Tương tự, khi xoay đường ống loại số 3, số 4, số 5, số 6 cũng có thể biến chúng thành hình dạng của một trong các đường ống loại 3, 4, 5, 6. Chỉ có đường ống loại số 7 dù có xoay cũng không có sự biến đổi nào. Ví dụ, ban đầu các đường ống được lắp đặt như hình dưới, và nước chảy từ xuống từ đường ống đầu tiên nằm bên trái.

Hình 2
[Hình 2]

Nước có thể chảy đúng cách từ đường ống thứ nhất đến đường ống thứ ba. Tuy nhiên, đường ống thứ 4 có đầu hở để nước chảy vào nằm ở góc phía dưới và bên phải, trong khi đó nước lại chảy từ bên trái sang nên không thể chảy qua đường ống thứ tư. Trong trường hợp này, nếu xoay đường ống thứ tư để biến nó thành loại hình dáng số 4 hoặc số 5 thì nước sẽ có thể chảy qua.

Hình 3
[Hình 3]

Hoặc

Hình 4
[Hình 4]

Trạng thái lắp đặt đường ống được cho dưới dạng mảng 2 chiều với kích thước N x N. Tại mỗi tọa độ chứa số tự nhiên từ 0 đến 7. 0 có nghĩa là vị trí trống, các số từ 1 đến 7 biểu thị cho hình dáng của đường ống được lắp đặt tại vị trí đó. Nước bắt đầu chảy từ điểm xuất phát được cho dưới dạng tọa độ (số hàng, số cột) trên mảng 2 chiều, điểm đích cũng được cho dưới dạng tọa độ (số hàng, số cột), mục tiêu là xoay tối đa M đường ống (không liên quan đến số lần quay, điều quan trọng là số lượng đường ống đã xoay được) để nước chảy từ điểm bắt đầu đến điểm đích. Hãy hoàn thiện hàm solution để trường hợp có thể sửa đường ống để nước chảy đến đích thì hàm trả về giá trị True, nếu không sửa được thì trả về giá trị False.

Các tham số đầu vào
1 <= N <= 10
1 <= M <= 5
waterway: Mảng 2 chiều lưu giá trị của đường ống với các giá trị từ 0 ~ 7
Tọa độ điểm bắt đầu (sr, sc), Tọa độ điểm đích (er, ec)
Kiểu trả về
Nếu xoay tối đa M đường ống và nước có thể chảy từ điểm bắt đầu về đến điểm đích thì trả về True, nếu không thể thì trả về False.
Nước vẫn chảy về điểm đích dù không xoay thì trả về True.
Ví dụ
N	M	waterway	sr	sc	er	ec	return
3	2	[[2, 0, 0], [3, 1, 3], [0, 0, 2]]	0	0	2	2	True
5	2	[[2, 2, 3, 4, 2], [2, 7, 2, 7, 5], [5, 5, 0, 6, 4], [0, 0, 0, 0, 2], [0, 0, 0, 0, 2]]	0	0	4	4	True
Giải thích ví dụ
Ví dụ 1:
Nếu xoay đường ống loại số 3 ở tọa độ (1,0) để biến nó thành hình dạng loại số 6, và xoay đường ống loại số 3 ở tọa độ (1,2) để biến nó thành hình dạng loại số 4 thì nước có thể chảy từ (0, 0) đến (2, 2).

Hình ví dụ 1

Ví dụ 2:
Nếu xoay đường ống loại số 5 ở tọa độ (2, 0) để biến nó thành hình dạng loại số 6, và xoay đường ống loại số 2 ở tọa độ (1,2) để biến nó thành hình dạng loại số 1 thì nước có thể chảy từ (0, 0) đến (4, 4).
'''
