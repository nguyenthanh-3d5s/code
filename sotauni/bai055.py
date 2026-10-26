'''
Tính số ngày không có ô dù nhưng có mưa
Mô tả
Có một danh sách các ngày mà bạn mang ô và một danh sách các ngày có mưa. Bạn cần tìm số ngày mà không có ô nhưng lại có mưa.

Danh sách các ngày mang ô được cung cấp dưới dạng mảng umbrellas và danh sách các ngày có mưa được cung cấp dưới dạng mảng rains như là tham số của hàm solution. Hãy hoàn thành hàm solution để trả về số ngày không có ô nhưng có mưa.

Thông tin tham số
Mảng umbrellas chứa các ngày mà bạn mang ô.
Mảng rains chứa các ngày có mưa.
Độ dài của umbrellas là từ 1 đến 1,000.
Độ dài của rains là từ 1 đến 1,000.
Các phần tử trong umbrellas và rains là chuỗi theo định dạng yyyy/mm/dd (năm/tháng/ngày).
Thông tin giá trị trả về
Hàm sẽ trả về số ngày không có ô nhưng có mưa.

Ví dụ
umbrellas	rains	return
["2018/06/01", "2017/03/04", "2019/04/28"]	["2017/03/04", "2019/04/27"]	1
Giải thích ví dụ
Vào ngày "2019/04/27", không có ô nhưng có mưa. Do đó, hàm sẽ trả về 1.
'''
def solution(umbrellas, rains):
    umbrella_set = set(umbrellas)
    answer = 0
    for day in rains:
        if day not in umbrella_set:
            answer += 1
    return answer
