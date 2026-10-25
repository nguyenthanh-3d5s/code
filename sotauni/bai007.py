'''
Tính số lần vận chuyển tối thiểu
Mô tả
Bạn cần chuyển đồ bằng một chiếc xe có thể chở tối đa hai món đồ và chịu được trọng lượng không vượt quá limit. Bạn cần tìm số lần tối thiểu mà chiếc xe phải quay lại để chuyển tất cả đồ.

Yêu cầu
Hàm solution nhận vào hai tham số: một mảng weights chứa trọng lượng của các món đồ và một số nguyên limit là trọng lượng tối đa mà chiếc xe có thể chịu. Bạn cần viết hàm solution để trả về số lần tối thiểu mà chiếc xe phải quay lại để chuyển tất cả đồ. Tuy nhiên, một số mã trong hàm đã bị sai và không hoạt động đúng. Bạn cần sửa mã sao cho nó xử lý đúng tất cả các đầu vào. Chỉ cần sửa một dòng trong mã.

Giải thích tham số
Mảng weights chứa trọng lượng của các món đồ.
Số nguyên limit là trọng lượng tối đa mà chiếc xe có thể chịu.
Mảng weights đã được sắp xếp theo thứ tự tăng dần.
Các phần tử trong weights là các số nguyên dương từ 1 đến 1000.
limit là một số nguyên dương từ 1 đến 1000.
Chỉ có trường hợp mà chiếc xe có thể chuyển tất cả đồ được đưa ra.
Giải thích giá trị trả về
Hãy trả về số lần tối thiểu mà chiếc xe phải quay lại để chuyển tất cả đồ.

Ví dụ
weights	limit	return
[2, 3, 3, 4]	5	3
Giải thích ví dụ
Nếu bạn chia đồ thành (2, 3), (3), (4), chiếc xe sẽ phải quay lại ba lần để chuyển tất cả đồ. Đây là số lần quay lại tối thiểu, vì vậy trả về 3.
'''
def solution(weights, limit):
    answer = 0
    left = 0
    right = len(weights) - 1
    while left <= right:
        if weights[left] + weights[right] <= limit:
            left += 1
        right -= 1
        answer += 1
    
    return answer
