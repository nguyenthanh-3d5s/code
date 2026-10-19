'''
Tính điểm từ kết quả của xúc xắc
Mô tả
Bạn muốn tính điểm từ việc lăn một viên xúc xắc lập phương nhiều lần theo các quy tắc sau:

Thêm số xuất hiện khi lăn xúc xắc vào điểm số.
Nếu có số nào chỉ xuất hiện một lần sau khi lăn tất cả xúc xắc, hãy thêm số đó vào điểm số.
Ví dụ, giả sử bạn lăn xúc xắc ba lần và kết quả là 1, 1, 4.

Tổng điểm từ các số lăn ra là 1 + 1 + 4 = 6.
Số 4 chỉ xuất hiện một lần, vì vậy bạn thêm 4 vào điểm số. Cuối cùng, điểm số là 10.
Để tính điểm theo quy tắc trên, bạn đã viết cấu trúc chương trình như sau:

Đếm số lần xuất hiện của mỗi số khi lăn xúc xắc.
Cộng tất cả các số lăn ra lại với nhau.
Sử dụng kết quả từ bước 1 để thêm các số chỉ xuất hiện một lần vào kết quả của bước 2.
Khi bạn có một mảng dice chứa kết quả lăn xúc xắc, hãy viết hàm solution để trả về điểm số cuối cùng. Hãy điền vào các chỗ trống để mã hoạt động đúng. Các chỗ trống cần điền các hàm và tham số func_a, func_b, func_c một cách hợp lý.

Thông tin tham số
Mảng dice chứa kết quả lăn xúc xắc được truyền vào hàm solution.

Các phần tử của dice là các số tự nhiên từ 1 đến 6.
Thông tin giá trị trả về
Hãy trả về điểm số cuối cùng.

Ví dụ
dice	return
[1, 1, 4]	10
[1, 2, 3, 2]	12
Giải thích ví dụ
Ví dụ #1
Giống như ví dụ đã nêu ở trên.

Ví dụ #2
Tổng điểm từ các số lăn ra là 1 + 2 + 3 + 2 = 8. Số 1 và 3 chỉ xuất hiện một lần, vì vậy điểm số cuối cùng là 8 cộng với 1 và 3, tổng là 12.
'''
def fun_a(numbers):
    answer =[0 for i in range(7)]
    for i in numbers:
        answer[i] += 1
    return answer

def fun_b(numbers):
    answer = 0
    for i in numbers:
        answer += i
    return answer

def fun_c(numbers):
    answer = 0
    for i in range(1, 7):
        if numbers[i] == 1:
            answer += i
    return answer

def solution(dice):
    counter = fun_a(dice)
    answer = fun_b(dice)
    answer += fun_c(counter)
    return answer

def _main():
    _data = list(map(int, input().split()))
    _res = solution(_data)
    print(_res)

_main()
