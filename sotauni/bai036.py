'''
Bài toán cân bằng trên cân hai bên
Mô tả bài toán
Bài toán này yêu cầu bạn viết hàm solution để thỏa mãn các yêu cầu đã cho.

Cân hai bên là một công cụ có một thanh dài với một đĩa ở mỗi đầu, và một giá đỡ ở giữa thanh để so sánh trọng lượng của các vật trên hai đĩa. Nếu trọng lượng của các vật trên hai đĩa bằng nhau, cân sẽ giữ thăng bằng.

Có N vật có trọng lượng trong khoảng 100kg. Bạn cần đặt ít nhất một vật vào vị trí mong muốn trên cân để giữ cho cân thăng bằng.

Ví dụ, có thể có 5 vật với trọng lượng lần lượt là 5, 1, 2, 2, 3 như hình dưới đây.

image 1

Nếu bạn đặt các vật có trọng lượng 1 và 2 lên đĩa bên trái và vật có trọng lượng 3 lên đĩa bên phải, cân sẽ thăng bằng và tổng trọng lượng của các vật đã đặt lên là 6.

image 2

Tuy nhiên, nếu bạn đặt vật có trọng lượng 5 lên đĩa bên trái và các vật có trọng lượng 1, 2, 2 lên đĩa bên phải, cân cũng sẽ thăng bằng và trong trường hợp này, tổng trọng lượng của các vật trên cân là 10, lớn nhất có thể. Khi coi việc đặt vật lên đĩa bên trái và bên phải là các trường hợp khác nhau, có tổng cộng 6 trường hợp có tổng trọng lượng là 10 như hình dưới đây.

image 3

Khi biết số lượng vật N và mảng weight biểu thị trọng lượng của các vật, hãy hoàn thành hàm solution để trả về số trường hợp mà tổng trọng lượng của các vật được đặt lên cân giữ thăng bằng là lớn nhất.

Nếu không thể giữ cho cân thăng bằng bằng bất kỳ cách nào, hãy trả về 0.

Mô tả tham số
3 ≤ N ≤ 15
weight: mảng biểu thị trọng lượng của các vật
1 ≤ (phần tử của weight) ≤ 100
Mô tả giá trị trả về
Trả về số trường hợp mà tổng trọng lượng của các vật được đặt lên cân giữ thăng bằng là lớn nhất.
Ví dụ
N	weight	return
5	[5, 1, 2, 2, 3]	6
5	[1, 3, 5, 11, 21]	0
Ví dụ 1: Như đã mô tả ở trên.
Ví dụ 2: Không thể giữ cho cân thăng bằng bằng bất kỳ cách nào, vì vậy trả về 0.
'''
def solution(N, weight):
    dp = {0: (0, 1)}
    for w in weight:
        new_dp = {}
        for diff, (total, cnt) in dp.items():
            if diff not in new_dp or new_dp[diff][0] < total:
                new_dp[diff] = (total, cnt)
            elif new_dp[diff][0] == total:
                new_dp[diff] = (total, new_dp[diff][1] + cnt)
            
            nd = diff + w
            nt = total + w
            if nd not in new_dp or new_dp[nd][0] < nt:
                new_dp[nd] = (nt, cnt)
            elif new_dp[nd][0] == nt:
                new_dp[nd] = (nt, new_dp[nd][1] + cnt)
            
            nd = diff - w
            nt = total + w
            if nd not in new_dp or new_dp[nd][0] < nt:
                new_dp[nd] = (nt, cnt)
            elif new_dp[nd][0] == nt:
                new_dp[nd] = (nt, new_dp[nd][1] + cnt)
        dp = new_dp
    
    if 0 in dp and dp[0][0] > 0:
        return dp[0][1]
    return 0
