'''
Tìm thời gian bắt đầu họp sớm nhất
OO công ty chỉ có thể bắt đầu họp khi có hơn một nửa nhân viên có mặt. Khi biết thời gian vào và ra của nhân viên, hãy tìm thời gian sớm nhất có thể bắt đầu họp.

Để làm điều này, chúng ta sẽ viết một chương trình theo cấu trúc sau:

Chuyển đổi thời gian vào và ra được cho theo định dạng hh:mm sang giây.
Tính số lượng nhân viên có mặt tại mỗi thời điểm từ 0 giây (00:00) đến 1439 giây (23:59).
Chuyển đổi thời gian sớm nhất mà hơn một nửa nhân viên có mặt sang định dạng hh:mm và trả về.
Mảng workers chứa thời gian vào và ra của từng nhân viên sẽ được truyền vào như tham số của hàm solution. Hãy hoàn thành hàm solution để trả về thời gian sớm nhất có thể bắt đầu họp. Hãy điền các hàm và tham số func_a, func_b, func_c vào chỗ trống để mã hoạt động chính xác.

Giải thích tham số
Mảng workers chứa thời gian vào và ra của từng nhân viên sẽ được truyền vào như tham số của hàm solution.

Độ dài của workers từ 3 đến 1,000.
Phần tử của workers có định dạng [thời gian vào, thời gian ra].
thời gian vào và thời gian ra là chuỗi định dạng "hh:mm".
thời gian vào và thời gian ra nằm trong khoảng "00:00" đến "23:59", và thời gian ra luôn sau thời gian vào.
Chỉ có trường hợp có thể họp được đưa vào.
Giải thích giá trị trả về
Hãy trả về thời gian sớm nhất có thể bắt đầu họp.

Ví dụ
workers	return
[["09:30", "18:00"], ["12:00", "15:00"], ["14:00", "17:00"], ["13:00", "17:00"], ["11:30", "17:00"]]	"12:00"
Giải thích ví dụ
Vào lúc "12:00", trong số 5 nhân viên, có 3 nhân viên đang làm việc với thời gian vào và ra là ["09:30", "18:00"], ["12:00", "15:00"], ["11:30", "17:00"]. Đây là thời điểm sớm nhất mà hơn một nửa số nhân viên có mặt, vì vậy trả về "12:00".
'''
