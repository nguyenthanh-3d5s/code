'''
Tìm số lượng bình bị vỡ
Mô tả
Khi đổ nước vào một chiếc bình bị vỡ, nước sẽ rò rỉ ra ngoài. Khi biết lượng nước đã đổ vào bình và lượng nước còn lại sau khi đổ, chúng ta cần tìm số lượng bình bị vỡ.

Ví dụ, nếu đổ 10 đơn vị nước vào bình số 1 và 30 đơn vị nước vào bình số 3, nhưng bình số 1 còn lại 10 đơn vị và bình số 3 còn lại 27 đơn vị. Khi đó, bình bị vỡ chỉ có bình số 3, vì vậy số lượng bình bị vỡ là 1.

Một mảng pourings chứa lượng nước đã đổ vào mỗi bình và một mảng residuals chứa lượng nước còn lại sau khi đổ sẽ được truyền vào tham số của hàm solution. Chúng ta cần viết hàm solution để trả về số lượng bình bị vỡ. Hãy hoàn thành toàn bộ mã bằng cách điền vào các chỗ trống.

Mô tả tham số
Mảng pourings chứa lượng nước đã đổ vào mỗi bình và mảng residuals chứa lượng nước còn lại sau khi đổ sẽ được truyền vào tham số của hàm solution.

Độ dài của pourings là từ 1 đến 3,000.
Phần tử của pourings có định dạng [số bình, lượng nước đã đổ].
số bình là số tự nhiên từ 1 đến 3,000.
lượng nước đã đổ là số tự nhiên từ 1 đến 100.
Có thể đổ nước nhiều lần vào cùng một bình.
Độ dài của residuals là từ 1 đến 1,000.
Phần tử của residuals có định dạng [số bình, lượng nước còn lại].
số bình là số tự nhiên từ 1 đến 3,000.
Không có phần tử nào trong residuals có cùng số bình.
lượng nước còn lại là số tự nhiên từ 0 đến 100.
Mô tả giá trị trả về
Hãy trả về số lượng bình bị vỡ.

Ví dụ
pourings	residuals	return
[[1, 10], [3, 30]]	[[3, 27], [1, 10]]	1
Mô tả ví dụ
Giống như ví dụ đã nêu ở trên.
'''
def solution(pourings, residuals):
    answer = 0
    jars = [0]*3001
    for idx, water in pourings:
        jars[idx] += water
    
    for idx, water in residuals:
        if jars[idx] ​>​ water:
            answer += 1
    return answer
