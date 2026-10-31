'''
Chia đội bóng rổ
| Mô tả câu hỏi Dưới đây là bài toán yêu cầu triển khai một hàm thỏa mãn các yêu cầu: Có 6 người bạn muốn chia đều thành hai đội để chơi bóng rổ, sao cho mỗi đội phải có ít nhất hai thành viên. Sức mạnh của mỗi đội được tính bằng tổng bình phương sức mạnh của các thành viên trong đội.

Mục tiêu là chia thành hai đội sao cho chênh lệch sức mạnh giữa hai đội là nhỏ nhất. Cho mảng power chứa sức mạnh của 6 người bạn, hãy hoàn thành hàm solution để trả về giá trị chênh lệch tối thiểu giữa sức mạnh của hai đội.

| Các tham số đầu vào

0 <= (power) <= 10000
| Kiểu trả về

Hàm solution cần trả về giá trị chênh lệch sức mạnh nhỏ nhất giữa hai đội, tính bằng một số nguyên.
| Ví dụ

power	return
[1, 2, 3, 4, 5, 6],	1
[0, 1, 0, 3, 11, 22],	353
[2, 3, 4, 55, 77, 88]	1181
Ví dụ 1 :
image 1
Giả sử sức mạnh của 6 người bạn là 1, 2, 3, 4, 5, 6.
image 2
Nếu chia thành hai đội như sau: (1, 3, 6) và (2, 4, 5), tổng sức mạnh của mỗi đội lần lượt là 46 và 45. Khi đó, chênh lệch sức mạnh của hai đội là 1, đây là giá trị chênh lệch tối thiểu.

Ví dụ 2 :
Nếu chia thành hai đội như sau: (0, 0, 22) và (1, 3, 11), chênh lệch sức mạnh giữa hai đội là 313, đây là giá trị chênh lệch tối thiểu.

Ví dụ 3 :
Nếu chia thành hai đội như sau: (55, 77) và (2, 3, 4, 88), chênh lệch sức mạnh giữa hai đội là 1181, đây là giá trị chênh lệch tối thiểu.
'''
def solution(power):
    from itertools import combinations

    n = 6
    best = float('inf')

    for k in range(2, n - 1):
        for team1 in combinations(range(n), k):
            team1_set = set(team1)
            strength1 = sum(power[i] ** 2 for i in team1)
            strength2 = sum(power[i] ** 2 for i in range(n) if i not in team1_set)
            diff = abs(strength1 - strength2)
            if diff < best:
                best = diff

    return best
