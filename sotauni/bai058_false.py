'''
Tính toán thu nhập tối đa từ việc làm túi xách thủ công
Vấn đề
Người thợ làm túi xách thủ công cần một khoảng thời gian nhất định để hoàn thành một chiếc túi, và khi hoàn thành, họ sẽ nhận được tiền công. Khi có nhiều đơn đặt hàng làm túi xách thủ công, chúng ta cần tìm ra số tiền tối đa mà người thợ có thể kiếm được trong khoảng thời gian làm việc là day.

Mảng orders chứa thời gian sản xuất và tiền công cho từng chiếc túi, và tham số day là khoảng thời gian mà người thợ có thể làm việc. Hãy hoàn thành hàm solution để trả về số tiền tối đa mà người thợ có thể kiếm được trong khoảng thời gian day.

Giới hạn
Độ dài của orders là từ 1 đến 30.
Các phần tử trong orders có định dạng [thời gian sản xuất, tiền công].
Thời gian sản xuất là số nguyên dương từ 1 đến 1000.
Tiền công là số nguyên dương từ 1 đến 1000, tính theo đơn vị triệu đồng.
day là số nguyên dương từ 1 đến 1000, tính theo ngày.
Ví dụ
orders	day	answer
[[1, 1], [4, 10], [6, 5], [10, 10]]	10	15
[[10, 15], [12, 25], [20, 21]]	15	25
[[3, 10], [5, 20], [1, 20], [4, 40], [5, 200]]	5	200
Giải thích ví dụ #1
Khi nhận đơn [4, 10] và [6, 5], tiền công là 15. Đây là số tiền tối đa mà người thợ có thể kiếm được trong 10 ngày.

Giải thích ví dụ #2
Khi nhận đơn [12, 25], tiền công là 25. Đây là số tiền tối đa mà người thợ có thể kiếm được trong 15 ngày.

Giải thích ví dụ #3
Khi nhận đơn [5, 200], tiền công là 200. Đây là số tiền tối đa mà người thợ có thể kiếm được trong 5 ngày.
'''
def solution(orders, day):
    dp = [0] * (day + 1)
    
    for time, pay in orders:
        for j in range(day, time - 1, -1):
            dp[j] = max(dp[j], dp[j - time] + pay)
    
    return dp[day]
