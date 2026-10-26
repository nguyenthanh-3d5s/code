''' 
Bài toán leo cầu thang
Mô tả bài toán
Bài toán này yêu cầu tìm và sửa một dòng mã bị lỗi để hoàn thành hàm solution.

Bạn muốn leo lên N bậc cầu thang. Khi leo cầu thang, bạn có thể bước lên 1 bậc, 2 bậc hoặc 5 bậc một lần.

Khi có 7 bậc cầu thang như hình dưới đây, có nhiều cách để leo lên bậc thứ 7.

image 1

Sau khi bước lên 2 bậc 3 lần, bạn có thể bước lên 1 bậc để đến bậc thứ 7, tổng cộng là 4 lần di chuyển.

image 2

Tuy nhiên, nếu bạn bước lên 5 bậc và sau đó bước lên 2 bậc, bạn chỉ cần di chuyển 2 lần để đến bậc thứ 7, đây là cách di chuyển ít nhất để đến bậc thứ 7.

image 3

Khi biết số bậc cầu thang N, hãy hoàn thành hàm solution để trả về số lần di chuyển ít nhất để đến bậc thứ N.

Tham số
N (1 ≤ N ≤ 1,000,000)
Kiểu trả về
Trả về số lần di chuyển ít nhất để đến bậc thứ N.
Ví dụ
N	Return
7	2
117	24
Giải thích ví dụ
Ví dụ 1
Giống như mô tả ở trên.

Ví dụ 2
Để đến bậc thứ 117, bạn cần lặp lại quá trình bước lên 5 bậc 23 lần và sau đó bước lên 2 bậc, tổng số lần di chuyển là 24.
'''
def solution(N):
    dp = [0] * 1000001

    dp[1] = 1
    dp[2] = 1
    dp[3] = 2
    dp[4] = 2

    for i in range(5, N + 1):
        dp[i] = min(dp[i - 1], dp[i - 2], dp[i - 5]) + 1

    return dp[N]
