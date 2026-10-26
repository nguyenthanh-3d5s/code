'''
Bài toán trò chơi lật thẻ
Mô tả bài toán
Trò chơi lật thẻ là một trò chơi trong đó các thẻ được đánh số từ 1 đến 100 được đặt úp xuống theo dạng N hàng × M cột. Mỗi số xuất hiện một số lần chẵn, và mục tiêu là tìm các cặp thẻ có cùng số để loại bỏ chúng.

Quy trình chơi như sau:

Ban đầu tất cả các thẻ đều úp xuống.
Người chơi lật một thẻ bất kỳ.
Sau đó lật thêm một thẻ khác.
Nếu hai thẻ có cùng số, cả hai thẻ sẽ bị loại bỏ.
Nếu khác số, cả hai được úp xuống lại.
Tiếp tục lặp lại cho đến khi tất cả các thẻ đều được loại bỏ.
Ví dụ
Xét bàn chơi gồm 2 hàng × 2 cột:

a b
c d
Giả sử:

a và d có cùng số.
b và c có cùng số.
Nếu chọn:

a → b
Hai thẻ khác nhau nên chúng sẽ được úp lại.

Nếu chọn:

a → d
Hai thẻ giống nhau nên cả hai sẽ bị loại bỏ.

Đếm số cách loại bỏ
Thứ tự chọn thẻ được xem là khác nhau, vì vậy cần đếm mọi trình tự hợp lệ để loại bỏ toàn bộ các thẻ.

Trong ví dụ trên có 8 cách:

a, d, b, c
a, d, c, b
d, a, b, c
d, a, c, b
b, c, a, d
b, c, d, a
c, b, a, d
c, b, d, a
Cho:

N: số hàng
M: số cột
cards: ma trận biểu diễn số trên từng thẻ
Hãy hoàn thành hàm solution để trả về số cách loại bỏ toàn bộ các thẻ.

Đầu vào luôn đảm bảo rằng có thể loại bỏ hết tất cả các thẻ.

Ràng buộc
1 ≤ N, M ≤ 5
1 ≤ N × M ≤ 10
N × M luôn là số chẵn.
cards là ma trận biểu diễn các thẻ.
cards[i][j] là số trên thẻ tại hàng (i + 1) và cột (j + 1).
1 ≤ cards[i][j] ≤ 100
Mỗi giá trị trong cards xuất hiện một số lần chẵn.
Giá trị trả về
Trả về số cách để loại bỏ toàn bộ các thẻ.

Ví dụ
N	M	cards	Return
2	2	[[1, 2], [2, 1]]	8
3	4	[[1,5,2,1], [2,5,3,4], [4,3,3,3]]	138240
Giải thích
Ví dụ 1
Với:

1 2
2 1
Có tổng cộng 8 trình tự chọn thẻ khác nhau để loại bỏ hết tất cả các thẻ.

Ví dụ 2
Với:

[
  [1, 5, 2, 1],
  [2, 5, 3, 4],
  [4, 3, 3, 3]
]
Một trình tự hợp lệ là:

(0,0)
→ (0,3)
→ (0,1)
→ (1,1)
→ (0,2)
→ (1,0)
→ (1,2)
→ (2,1)
→ (2,0)
→ (1,3)
→ (2,2)
→ (2,3)
Sau chuỗi lựa chọn trên, tất cả các thẻ đều được loại bỏ.

Tổng số trình tự hợp lệ là:

138240
'''
def solution(N, M, cards):
    total = N * M
    flat = []
    for i in range(N):
        for j in range(M):
            flat.append(cards[i][j])
    
    memo = {}
    
    def count(mask):
        if mask == 0:
            return 1
        if mask in memo:
            return memo[mask]
        
        remaining = [i for i in range(total) if mask & (1 << i)]
        result = 0
        for idx in range(len(remaining)):
            i = remaining[idx]
            for jdx in range(idx + 1, len(remaining)):
                j = remaining[jdx]
                if flat[i] == flat[j]:
                    new_mask = mask & ~(1 << i) & ~(1 << j)
                    result += 2 * count(new_mask)
        
        memo[mask] = result
        return result
    
    return count((1 << total) - 1)
