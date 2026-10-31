'''
Tính Ngày Kỷ Niệm
| Mô tả câu hỏi Dưới đây là bài toán yêu cầu chỉnh sửa code cơ bản sao cho thỏa mãn yêu cầu. Code máy tính ngày kỷ niệm là hàm dựa trên ngày bắt đầu đã cho và số ngày đã trôi qua để cộng thêm số ngày đã trôi qua vào ngày bắt đầu, sau đó lại trả về kết quả đã tính dưới dạng năm, tháng, ngày. Qua đó có thể tính toán tính ngày kỷ niệm hoặc ngày sau một khoảng thời gian nhất định tính từ một ngày cụ thể nào đó.

| Các tham số đầu vào

Các phần tử của mảng startDate phải nằm trong các phạm vi sau.
Năm (startDate[0]): số nguyên lớn hơn 1900 và nhỏ hơn 2500
Tháng (startDate[1]): số nguyên lớn hơn 1 và nhỏ hơn 12
Ngày (startDate[2]): số nguyên lớn hơn 1 và nhỏ hơn 3
0 <= Ngày trôi qua(n) <= 100,000
| Kiểu trả về

Tính ngày bắt đầu (startDate) là Day 0, giá trị trả về dưới dạng một mảng có 3 số nguyên ứng với năm, tháng, ngày của ngày thứ n tính từ ngày bắt đầu (startDate)
Phần tử đầu tiên là số nguyên tương ứng với năm sau n ngày kể từ ngày bắt đầu (startDate)
Phần tử thứ hai là số nguyên tương ứng với tháng sau n ngày kể từ ngày bắt đầu (startDate)
Phần tử thứ ba là số nguyên tương ứng với ngày sau n ngày kể từ ngày bắt đầu (startDate)
| Ví dụ

startDate	n	return
[1987, 1, 14]	10000	[2014, 6, 1]
[2004, 7, 1]	365	[2005, 7, 1]
[2022, 1, 11]	600	[2023, 9, 3]
Cách xác định năm nhuận như sau.

Nếu năm đó chia hết cho 4 và không chia hết cho 100 thì là năm nhuận.
Nếu năm đó chia hết cho 400 thì là năm nhuận
Nếu là năm nhuận thì số ngày của tháng 2 trong năm đó sẽ là 29 ngày.

Cần chỉnh sửa một dòng duy nhất trong code.

Tính ngày kỷ niệm dựa theo ngày bắt đầu và số ngày đã cho. Ngày kỷ niệm tính ngày bắt đầu là Day 0 và thực hiện tính theo các bước như sau.

Phân loại riêng năm, tháng, ngày trong ngày bắt đầu và lưu vào biến.
Lặp lại quá trình sau khi mà giá trị n lớn hơn 0.
Lấy số ngày của tháng tương ứng. (Xem xét cả năm nhuận để điều chỉnh số ngày trong tháng 2)
Nếu số ngày còn lại lớn hơn số ngày của tháng hiện tại thì cộng thêm số lượng ngày của tháng đó vào số ngày còn lại.
Nếu số ngày còn lại nhỏ hơn số ngày của tháng hiện tại thì cộng thêm số lượng ngày của tháng đó vào số ngày còn lại và kết thúc.
Gộp và trả về kết quả tính năm, tháng, ngày dưới định dạng mảng.
Số ngày trong từng tháng của một năm bình thường (không phải năm nhuận) sẽ như sau.

Tháng	1	2	3	4	5	6	7	8	9	10	11	12
Số ngày	31	28	31	30	31	30	31	31	30	31	30	31

'''
def solution(start_date, n):
    year, month, day = start_date

    while n > 0:
        days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31][month - 1]
        if month == 2:
            if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
                days_in_month = 29

        left_days = days_in_month - day + 1
        if n >= left_days:
            n -= left_days
            month += 1
            day = 1

            if month > 12:
                year += 1
                month = 1
        else:
            day += n
            break

    return [year, month, day]
