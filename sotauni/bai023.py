'''
Tính tổng các số trong danh sách
Mô tả câu hỏi
Câu hỏi này yêu cầu điền vào các chỗ trống trong mã nguồn cơ bản được cung cấp để hoàn thành nhiệm vụ.

Bạn sẽ xác định tổng của bất kỳ hai số nào từ danh sách số nguyên đầu vào.

Kết quả sẽ được trả về theo thứ tự tăng dần, loại trừ các giá trị trùng lặp.

Ví dụ
Với danh sách số nguyên đầu vào [1, 1, 2, 2, 3, 5]:

1+1=2
1+2=2+1=3
2+2=1+3=4
2+3=5
1+5=6
2+5=7
3+5=8
Vì vậy, bạn sẽ thấy [2, 3, 4, 5, 6, 7, 8] như là kết quả.

Vui lòng điền vào tất cả các chỗ trống để hoàn thành toàn bộ mã.

Tham số
Các giá trị số nguyên (0<=value<=999) sẽ được nhập dưới dạng một danh sách một chiều.

Kiểu trả về
Bạn nên có khả năng xác định một danh sách một chiều các số nguyên được sắp xếp theo thứ tự tăng dần.

Ví dụ
Ví dụ	Đầu vào	Đầu ra
# 1	[1, 2, 3, 4, 5]	[3, 4, 5, 6, 7, 8, 9]
# 2	[10, 11, 12]	[21, 22, 23]
Ví dụ: Kết quả nên được trả về dưới dạng một danh sách theo thứ tự tăng dần thỏa mãn các điều kiện mô tả câu hỏi.
'''
def solution(in_data):
    answer = list()
    data_set = set()
    for i in range(0, len(in_data)):        
        for j in range(0, len(in_data)):             
            if ​i < j​ :
                data_set.add(​in_data[i] + in_data[j]​)
                
    answer = ​list(data_set)​
    answer.​sort()​
    return  answer
