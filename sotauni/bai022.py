'''
Xác định các phần tử kết hợp của hai mảng
Mô tả câu hỏi
Câu hỏi này yêu cầu bạn điền vào các chỗ trống trong mã cơ bản được cung cấp để hoàn thành nhiệm vụ.

Bạn sẽ xác định các phần tử kết hợp của hai mảng, A và B, mà không có các phần tử chung giữa hai mảng.

Ví dụ, nếu danh sách A là [1, 2, 3, 4, 5] và danh sách B là [4, 5, 6, 7], các phần tử chung là 4 và 5.

Do đó, các phần tử kết hợp sau khi loại trừ các phần tử chung là [1, 2, 3, 6, 7].

Đầu ra nên được trình bày theo thứ tự tăng dần.

image 1

Vui lòng điền vào tất cả các chỗ trống để hoàn thành toàn bộ mã.

Tham số
Tham số card (1 <= card <= 99) sẽ được nhập dưới dạng một danh sách một chiều các số nguyên.

Kiểu trả về
Bạn nên có thể xác định một danh sách một chiều các số nguyên được sắp xếp theo thứ tự tăng dần.

Ví dụ
Ví dụ	Input 1	Input 2	Output
# 1	[1, 6, 3]	[3, 1, 4, 5]	[4, 5, 6]
# 2	[10, 20, 30, 40]	[30, 10, 40, 50]	[20, 50]
Ví dụ 1: Các phần tử chung là 1, 3, do đó đầu ra là 4, 5, 6.
Ví dụ 2: Các phần tử chung là 10, 30, 40, do đó đầu ra là 20, 50.
'''
def getCount(tmp):        
    count = 0
    for i in range(0, len(tmp)): 
        if tmp[i] !=0 :
            ​count += 1​
    return count

def check(in_data1, in_data2):        
    tmp = list()
    for i in range(0, len(in_data1)): 
        ​tmp.append(in_data1[i])​

    for i in range(0, len(tmp)): 
        for j in range(0, len(in_data2)): 
            if tmp[i] == in_data2[j] :
                tmp[i] = 0
                ​break​
    return tmp

def solution(in_data1, in_data2):
    tmp1 = check(in_data1, in_data2)
    tmp2 = check(in_data2, in_data1)
    
    count=getCount(tmp1) + getCount(tmp2)    
    answer = list()

    c = 0
    for i in range(0, len(tmp1)): 
        if ​tmp1[i] != 0​ and c <= count:
            ​answer.append(tmp1[i])​
            count +=1

    for i in range(0, len(tmp2)): 
        if ​tmp2[i]​ != 0  and c <= count:
            ​answer.append(tmp2[i])​
            count += 1

    answer.sort()
    return  answer
