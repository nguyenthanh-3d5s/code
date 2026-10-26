'''
Tìm kho báu có điểm số cao nhất
Mô tả
Bạn muốn lấy một kho báu có điểm số cao nhất trên bản đồ, trong đó mỗi ô có kích thước 1. Chỉ có thể di chuyển lên, xuống, trái, phải và cách tính điểm của kho báu như sau:

(Giá trị của kho báu - Khoảng cách ngắn nhất từ người tham gia đến kho báu)
Hình ảnh

Giả sử có 3 kho báu với giá trị như hình trên, điểm số của từng kho báu sẽ như sau:

Điểm số kho báu 0 = Giá trị kho báu 0 (4) - Khoảng cách ngắn nhất đến kho báu (5) = -1
Điểm số kho báu 1 = Giá trị kho báu 1 (3) - Khoảng cách ngắn nhất đến kho báu (3) = 0
Điểm số kho báu 2 = Giá trị kho báu 2 (5) - Khoảng cách ngắn nhất đến kho báu (3) = 2
Trong trường hợp này, kho báu có điểm số cao nhất là 2, vì vậy hãy trả về 2.

Khi tọa độ của người tham gia được biểu diễn bằng x, y và mảng treasures chứa tọa độ và giá trị của các kho báu, hãy viết hàm solution để trả về kho báu có điểm số cao nhất. Hãy điền vào chỗ trống để hoàn thành toàn bộ mã.

Giải thích tham số
Tọa độ của người tham gia x, y và mảng treasures chứa tọa độ và giá trị của các kho báu từ kho báu 0 trở đi được truyền vào hàm solution.

x, y là các số nguyên từ 0 đến 100.
Độ dài của treasures là số nguyên từ 1 đến 50.
Các phần tử của treasures có định dạng [tọa độ x của kho báu, tọa độ y của kho báu, giá trị của kho báu].
Tọa độ x và y của kho báu là các số nguyên từ 0 đến 100.
Giá trị của kho báu là các số nguyên từ 1 đến 100.
Giải thích giá trị trả về
Hãy trả về số thứ tự của kho báu có điểm số cao nhất. Không có kho báu nào có điểm số giống nhau.

Ví dụ
x	y	treasures	return
3	3	[[1, 0, 4], [1, 4, 3], [4, 1, 5]]	2
Giải thích ví dụ
Giống như ví dụ đã nêu ở trên.
'''
def solution(x, y, treasures):
    answer = -1
    max_score = -400
    
    for idx, [treasure_x, treasure_y, value] in enumerate(treasures):
        score = ​value - (abs(x - treasure_x) + abs(y - treasure_y))​
        if score > max_score:
            max_score = score
            answer = idx
    return answer
