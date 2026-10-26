'''
Chương trình sửa lỗi tự động
Mô tả
Công ty XX đã tạo ra một chương trình bàn phím tự động sửa lỗi chính tả. Chương trình bàn phím này sửa lỗi dựa trên thông tin đã được lưu trữ trước trong chương trình. Khi được cung cấp một mảng chứa thông tin sửa lỗi và một mảng chứa câu có lỗi chính tả, chúng ta cần xác định câu đã được sửa lỗi.

Hãy hoàn thành hàm solution để trả về mảng chứa câu đã được sửa lỗi khi được cung cấp mảng corrections chứa thông tin sửa lỗi và mảng sentence chứa câu.

Giải thích tham số
Hàm solution nhận hai tham số:

Mảng corrections chứa thông tin sửa lỗi.
Mảng sentence chứa câu cần sửa lỗi.
Điều kiện:
Mỗi từ được biểu diễn bằng một số tự nhiên từ 1 đến 100.
Độ dài của mảng corrections từ 1 đến 100.
Mỗi phần tử trong corrections có dạng [từ sai, từ sửa].
Nếu từ không có trong danh sách từ sai thì không phải là lỗi chính tả.
Không có trường hợp từ sai và từ sửa là giống nhau.
Độ dài của mảng sentence từ 1 đến 100.
Mỗi phần tử trong sentence là một từ được biểu diễn bằng số tự nhiên từ 1 đến 100.
Giải thích giá trị trả về
Hãy trả về mảng chứa câu đã được sửa lỗi từ mảng sentence.

Ví dụ
corrections	sentence	return
[[1, 4], [2, 6]]	[1, 4, 2, 6, 7]	[4, 4, 6, 6, 7]
Giải thích ví dụ
Sửa từ 1 thành 4 và từ 2 thành 6. Do đó, khi sửa [1, 4, 2, 6, 7] sẽ trở thành [4, 4, 6, 6, 7].
'''
def solution(corrections, sentence):
    correction_map = {wrong: correct for wrong, correct in corrections}
    answer = [correction_map.get(word, word) for word in sentence]
    return answer
