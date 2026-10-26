'''
Tính số cách chọn hội trưởng và phó hội trưởng
Mô tả
Một trường quốc tế có sinh viên đến từ hai quốc gia khác nhau. Khi muốn bầu chọn hội trưởng và phó hội trưởng có quốc tịch khác nhau, trường muốn biết số cách bầu chọn hội trưởng và phó hội trưởng. Để xác định quốc tịch, trường đã gán số cho các ứng viên và ghi lại các cặp ứng viên có cùng quốc tịch.

Ví dụ, nếu số ứng viên là 5 và ghi chép [[1, 2], [1, 5], [3, 4]] được đưa ra, thì ứng viên 1, 2, 5 có cùng quốc tịch và ứng viên 3, 4 có cùng quốc tịch. Do đó, số cách bầu chọn hội trưởng và phó hội trưởng là 3*2, tổng cộng là 6 cách.

Số ứng viên n và mảng record ghi lại các sinh viên có cùng quốc tịch được truyền vào tham số của hàm solution. Tại thời điểm này, hãy viết hàm solution để trả về số cách bầu chọn hội trưởng và phó hội trưởng. Tuy nhiên, một phần của mã bị sai, vì vậy nó không hoạt động đúng với một số đầu vào. Hãy sửa đổi mã đã cho bằng cách chỉ thay đổi một dòng để nó hoạt động đúng với tất cả các đầu vào.

Mô tả tham số
Mảng record ghi lại số ứng viên n và các sinh viên có cùng quốc tịch được truyền vào tham số của hàm solution.

n là số tự nhiên không vượt quá 100.
Độ dài của record từ 2 đến 1,000.
Phần tử của record là cặp ứng viên có cùng quốc tịch theo định dạng [số1, số2].
số1 luôn nhỏ hơn số2.
Mỗi số là số tự nhiên không vượt quá n.
Mỗi số ứng viên được đưa ra ít nhất một lần trong phần tử của record.
Các phần tử của record được đưa ra theo thứ tự sắp xếp.
Không có trường hợp nào không có ứng viên cùng quốc tịch được đưa ra.
Mô tả giá trị trả về
Hãy trả về số cách bầu chọn hội trưởng và phó hội trưởng.

Ví dụ
n	record	return
5	[[1, 2], [2, 5], [3, 4]]	6
Mô tả ví dụ
Giống như ví dụ trước.
'''
from collections import Counter

MAX_STUDENT = 101

def solution(n, record):
    roots = [0] * MAX_STUDENT
    for first, second in record:
        if roots[first] == 0:
            roots[first] = first
        roots[second] = roots[first] if roots[first] else first
    
    counter = Counter(roots)
    answer = 1
    for root, count in counter.items():
        if root != 0:
            answer *= count
    return answer
