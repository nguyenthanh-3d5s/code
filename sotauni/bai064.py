'''
Tính Ngày Sau 5 Ngày
Cho ngày hôm nay dưới định dạng yyyy-mm-dd. Hãy điền vào chỗ trống để tính ngày tháng sau 5 ngày tính từ ngày đã nhập, rồi hoàn thiện hàm solution trả về tổng yyyy + mm + dd của ngày đó.

Giới hạn
Không tính năm nhuận xuất hiện ngày 29/2. (Tháng 2 mặc định có 28 ngày.)
Không nhập ngày và tháng không tồn tại trong thực tế.
Ví dụ
date	return
"1999-12-31"	2006
"2013-09-28"	2026
Giải thích ví dụ #1
Tính từ ngày 31 tháng 12 năm 1999, ngày tháng của 5 ngày sau đó như dưới.

Ngày 1 : Ngày 1 tháng 1 năm 2000
Ngày 2 : Ngày 2 tháng 1 năm 2000
Ngày 3 : Ngày 3 tháng 1 năm 2000
Ngày 4 : Ngày 4 tháng 1 năm 2000
Ngày 5 : Ngày 5 tháng 1 năm 2000
Sau 5 ngày sẽ là ngày 5 tháng 1 năm 2000, tổng của năm, tháng, ngày này là 2000 + 1 + 5 = 2006.

Giải thích ví dụ #2
Tính từ ngày 28 tháng 9 năm 2013, ngày tháng của 5 ngày sau đó như dưới.

Ngày 1 : Ngày 29 tháng 9 năm 2013
Ngày 2 : Ngày 30 tháng 9 năm 2013
Ngày 3 : Ngày 1 tháng 10 năm 2013
Ngày 4 : Ngày 2 tháng 10 năm 2013
Ngày 5 : Ngày 3 tháng 10 năm 2013
Ngày thứ 5 là ngày 3 tháng 10 năm 2013, tổng của năm, tháng, ngày này là 2013 + 10 + 3 = 2026.
'''
def solution(date):
    
    date = ​date.split("-")​
    
    year = int(date[0])
    month = int(date[1])
    day = int(date[2])

    days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

    day += 5
    if ​day > days[month]​:
        day -= days[month]
        month += 1 

    if month > 12:
        month = 1
        ​year += 1​ 

    answer = ​year + month + day​
    return answer
