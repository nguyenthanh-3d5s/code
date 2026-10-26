'''
Xác định những lo lắng phổ biến nhất từ khảo sát
Mô tả
Chúng ta sẽ tìm hiểu những lo lắng lớn nhất thông qua một cuộc khảo sát. Cuộc khảo sát có 10 lựa chọn và lựa chọn được nhiều người chọn nhất sẽ là lo lắng lớn nhất.

Để thực hiện điều này, chúng ta sẽ viết một chương trình với cấu trúc như sau:

Đếm số người đã chọn mỗi lo lắng.
Tìm ra lo lắng được chọn nhiều nhất và số người đã chọn nó.
Lưu trữ các lo lắng được chọn theo số lượng người đã chọn vào một mảng theo thứ tự.
Mảng kết quả khảo sát được lưu trong biến worries và sẽ được truyền vào tham số của hàm solution. Chúng ta cần hoàn thành hàm solution để trả về mảng chứa các lo lắng được nhiều người chọn nhất, được sắp xếp theo thứ tự tăng dần. Hãy điền các hàm và tham số func_a, func_b, func_c vào các chỗ trống sao cho mã hoạt động chính xác.

Thông tin tham số
Mảng worries chứa kết quả khảo sát sẽ được truyền vào tham số của hàm solution.

Các phần tử của worries là các số tự nhiên từ 1 đến 10.
Độ dài của worries nằm trong khoảng từ 5 đến 1,000.
Thông tin giá trị trả về
Hãy trả về mảng chứa các lo lắng được nhiều người chọn nhất, được sắp xếp theo thứ tự tăng dần.

worries	return
[2, 3, 7, 3, 2, 2, 3]	[2, 3]
Giải thích ví dụ
Lo lắng số 2 và số 3 đều nhận được 3 phiếu bầu, đây là những lo lắng lớn nhất. Do đó, chúng ta sẽ trả về mảng [2, 3] được sắp xếp theo thứ tự.
'''
def func_a(arr):
    answer = [0] * 11
    for number in arr:
        answer[number] += 1
    return answer

def func_b(arr, value):
    answer = []
    for idx, number in enumerate(arr):
        if value == number:
            answer.append(idx)
    return answer
    
def func_c(arr):
    answer = 0
    for number in arr:
        if answer < number:
            answer = number
    return answer

def solution(worries):
    counter = func_​a​(​worries​)
    mode = func_​c​(​counter​)
    answer = func_​b​(​counter, mode​)
    return answer
