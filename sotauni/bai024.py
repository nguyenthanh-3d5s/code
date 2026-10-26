'''
Tìm số lớn nhất từ các chữ số trùng lặp
Mô tả câu hỏi
Câu hỏi này yêu cầu điền vào các chỗ trống trong mã nguồn cơ bản được cung cấp để hoàn thành nhiệm vụ.

Hai chuỗi chỉ bao gồm các số nguyên sẽ được nhập vào. Bạn sẽ trả về một chuỗi đại diện cho số lớn nhất có thể được tạo ra từ các chữ số trùng lặp của cả hai chuỗi đầu vào.

Nếu không có số nguyên trùng lặp, 'X' sẽ được trả về.

Ví dụ
Chuỗi đầu tiên là '12320', và chuỗi thứ hai là '22340'.

Trong số này, các số nguyên trùng lặp là 2, 3 và 0 (dù có hai số 2, bạn chỉ nên tính số nguyên trùng lặp của 2 một lần).

Chuỗi số nguyên lớn nhất mà chúng ta có thể trình bày là '320'. Vui lòng điền vào tất cả các chỗ trống để hoàn thành toàn bộ mã.

Tham số
Một chuỗi được tạo thành từ các số nguyên sẽ được nhập vào.

Kiểu trả về
Bạn nên có thể xác định một chuỗi đại diện cho một số nguyên.

Ví dụ
Ví dụ	Input 1	Input 2	Output
# 1	"91530"	"846"	"X"
# 2	"11442"	"14425"	"421"
Ví dụ 1: Vì không có số nguyên trùng lặp giữa hai đầu vào, nó trả về "X" như là đầu ra.
Ví dụ 2: Với các số nguyên trùng lặp là 1, 4 và 2, nó trả về "421" như là đầu ra.
'''
def solution(in_data1, in_data2):
    answer = ""
    data_set = list()
    count = 0
    flag = ​0​
    for i in range(0, len(in_data1)):    
        c = in_data1[i]
        for j in range(0, len(in_data2)):             
            if ​c == in_data2[j]​ :
                for k in range(0, count):
                    if ​data_set[k] == c​ :
                        ​flag = 1​
                if flag == 0 :
                    data_set.append(c)
                    count += 1
                flag = 0
    
    if count == 0:
        ​return "X"​
        count += 1

    data_set.sort​(reverse = True)​

    answer = ''.join(s for s in data_set)
    return  answer
