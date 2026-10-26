'''
Tính số đào còn lại sau khi đóng hộp
Mô tả
Một hộp chứa 4 quả đào. Khi có n quả đào, hãy tính số quả đào còn lại sau khi cho vào hộp.

Ví dụ
Giả sử có 15 quả đào. Trong trường hợp này, có thể tạo ra 3 hộp với 12 quả đào, và còn lại 3 quả đào.

Yêu cầu
Hãy hoàn thành hàm solution nhận tham số n là số lượng đào. Hàm sẽ trả về số quả đào còn lại sau khi cho vào hộp.

Thông tin tham số
Số lượng đào n được truyền vào hàm solution.
n là số tự nhiên từ 4 đến 100.
Thông tin giá trị trả về
Hàm trả về số quả đào còn lại sau khi cho vào hộp.

Ví dụ
n	return
15	3
Giải thích ví dụ
Giống như ví dụ đã nêu ở trên.
'''
def solution(n):
    return n % 4
