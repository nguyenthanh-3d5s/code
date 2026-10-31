'''
Rùa và Thỏ trong Mê Cung
Mô tả câu hỏi
Dưới đây là đề bài cần triển khai một hàm thỏa mãn yêu cầu.

Rùa và thỏ đang hợp sức để thoát khỏi mê cung kích thước N x M.

Rùa có thể di chuyển mỗi giây một ô theo các hướng lên, xuống, trái hoặc phải giống các ô được tô màu.

image 1

Mỗi giây Thỏ có thể di chuyển đến các vị trí đã được tô màu như sau.

image 2

Tuy nhiên, rùa và thỏ không thể di chuyển đến các vị trí có tường hoặc ra ngoài phạm vi của mê cung. Thêm vào đó, rùa và thỏ chỉ có thể di chuyển khi một trong hai đang cõng nhau.

Ban đầu, ở điểm xuất phát, thỏ được cõng trên lưng của rùa. Khi đó, cả hai sẽ di chuyển theo cách di chuyển của rùa.

Khi rùa được cõng trên lưng của thỏ, cả hai sẽ di chuyển theo cách di chuyển của thỏ.

Rùa và thỏ có thể thay đổi vị trí với nhau, và việc này mất 3 giây.

Mục tiêu là tìm thời gian ngắn nhất để di chuyển từ cổng vào (ở góc trên cùng bên trái) đến cổng ra (ở góc dưới cùng bên phải) trong mê cung.

Mê cung có kích thước N x M và được biểu diễn bằng một mảng (array) 2 chiều, trong đó mỗi phần tử là 0 hoặc 1. Số 0 là lối đi có thể di chuyển, và số 1 là tường không thể đi qua. Cho kích thước chiều dọc của mê cung là N, chiều ngang là M và mảng 2 chiều board đại diện cho mê cung, hãy hoàn thành hàm solution trả về thời gian tối thiểu để rùa và thỏ thoát khỏi mê cung.

Các tham số đầu vào
1 <= N, M <= 50
Đề bài đảm bảo rằng ô ở góc trên cùng bên trái và ô ở góc dưới cùng bên phải của mê cung là ô có thể di chuyển được (giá trị 0).
Kiểu trả về
Trả về thời gian tối thiểu cần thiết để rùa và thỏ thoát khỏi mê cung dưới dạng một số nguyên.
Nếu không thể thoát khỏi mê cung, trả về -1.
Ví dụ
N	M	board	return
5	6	[[0, 0, 0, 0, 0, 0], [1, 1, 1, 1, 0, 0], [0, 0, 0, 0, 0, 0], [0, 0, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0]]	8
3	3	[[0, 1, 0], [1, 0, 1], [0, 0, 0]]	8
3	3	[[0, 1, 0], [1, 1, 1], [0, 1, 0]]	-1
Ví dụ 1 :
Khi điểm xuất phát của mê cung được hiển thị màu xanh lam, điểm đích màu đỏ, và các bức tường màu đen, đường đi nhanh nhất để thỏ và rùa di chuyển từ điểm xuất phát đến điểm đích được minh họa như trong hình bên dưới.

image 3

(0, 0) -> (0, 1) -> (0, 2) -> (0, 3) -> đổi vị trí để thỏ cõng rùa -> (2, 4) -> (4, 5)

Nếu di chuyển theo cách trên, có thể đến đích trong thời gian tối thiểu là 8 giây.

Ví dụ 2 :
(0, 0) -> đổi vị trí để thỏ cõng rùa -> (2, 1) -> đổi vị trí để rùa cõng thỏ -> (2, 2)

Nếu di chuyển theo cách trên, có thể đến đích trong thời gian tối thiểu là 8 giây.

Ví dụ 3 :
Không thể thoát khỏi mê cung.
'''
import heapq

def solution(N, M, board):
    INF = float('inf')
    dist = [[[INF, INF] for _ in range(M)] for _ in range(N)]
    
    turtle_dirs = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    rabbit_dirs = [(-2, -1), (-2, 1), (2, -1), (2, 1),
                   (-1, -2), (-1, 2), (1, -2), (1, 2)]
    
    dist[0][0][0] = 0
    pq = [(0, 0, 0, 0)]
    
    while pq:
        t, r, c, who = heapq.heappop(pq)
        if t > dist[r][c][who]:
            continue
        if r == N - 1 and c == M - 1:
            return t
        
        nwho = 1 - who
        if t + 3 < dist[r][c][nwho]:
            dist[r][c][nwho] = t + 3
            heapq.heappush(pq, (t + 3, r, c, nwho))
        
        dirs = turtle_dirs if who == 0 else rabbit_dirs
        for dr, dc in dirs:
            nr, nc = r + dr, c + dc
            if 0 <= nr < N and 0 <= nc < M and board[nr][nc] == 0:
                if t + 1 < dist[nr][nc][who]:
                    dist[nr][nc][who] = t + 1
                    heapq.heappush(pq, (t + 1, nr, nc, who))
    
    ans = min(dist[N-1][M-1][0], dist[N-1][M-1][1])
    return -1 if ans == INF else ans
