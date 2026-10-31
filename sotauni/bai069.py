'''
Tổ hợp số nguyên từ 1 đến N
Hãy hoàn thiện hàm solution trả về số tổ hợp có thể tạo ra N từ tổng của các số nguyên từ 1 đến N.

Tuy nhiên, sẽ có các điều kiện giới hạn như sau:

A. Không tính các tổ hợp bị trùng lặp.
B. Mỗi số nguyên chỉ có thể sử dụng hai lần.
C. Trường hợp tổng chỉ chứa N dù không phải tổ hợp nhưng vẫn được tính vào trong số các tổ hợp hợp lệ.
Ví dụ
Giả sử N = 5 thì có thể sử dụng các số 1, 2, 3, 4, 5.

Sử dụng năm chữ số này, ta sẽ có các tổ hợp tạo ra N như sau:

1 + 1 + 1 + 1 + 1
1 + 1 + 1 + 2
1 + 1 + 2 + 1
1 + 1 + 3
1 + 2 + 1 + 1
1 + 2 + 2
1 + 3 + 1
1 + 4
2 + 1 + 1 + 1
2 + 1 + 2
2 + 2 + 1
2 + 3
3 + 1 + 1
3 + 2
4 + 1
5 (Giới hạn C)
Tại đây, nếu loại bỏ các tổ hợp bị trùng lặp như điều kiện A giới hạn, ta sẽ chỉ còn các tổ hợp sau hợp lệ:

1 + 1 + 1 + 1 + 1
1 + 1 + 1 + 2
1 + 1 + 2 + 1 (trùng với 1 + 1 + 1 + 2)
1 + 1 + 3
1 + 2 + 1 + 1 (trùng với 1 + 1 + 1 + 2)
1 + 2 + 2
1 + 3 + 1 (trùng với 1 + 1 + 3)
1 + 4
2 + 1 + 1 + 1 (trùng với 1 + 1 + 1 + 2)
2 + 1 + 2 (trùng với 1 + 2 + 2)
2 + 2 + 1 (trùng với 1 + 2 + 2)
2 + 3
3 + 1 + 1 (trùng với 1 + 1 + 3)
3 + 2 (trùng với 2 + 3)
4 + 1 (trùng với 1 + 4)
5
Tại đây, nếu loại bỏ tổ hợp sử dụng một số nguyên quá 2 lần như điều kiện B giới hạn, ta sẽ chỉ còn các tổ hợp sau hợp lệ:

1 + 1 + 1 + 1 + 1 (Sử dụng số 1 quá 2 lần)
1 + 1 + 1 + 2 (Sử dụng số 1 quá 2 lần)
1 + 1 + 2 + 1
1 + 1 + 3
1 + 2 + 1 + 1
1 + 2 + 2
1 + 3 + 1
1 + 4
2 + 1 + 1 + 1
2 + 1 + 2
2 + 2 + 1
2 + 3
3 + 1 + 1
3 + 2
4 + 1
5
Như vậy có lạitổng cộng 5 tổ hợp hợp lệ, vì vậy trả về giá trị 5.

Giới hạn
1 <= N <= 30
Ví dụ
N	return
5	5
Giải thích ví dụ
Tương tự ví dụ đã cho ở câu trên.
'''
def solution(N):
    count = 0
    
    def backtrack(remaining, start, used):
        nonlocal count
        if remaining == 0:
            count += 1
            return
        for num in range(start, min(N, remaining) + 1):
            if used.get(num, 0) < 2:
                used[num] = used.get(num, 0) + 1
                backtrack(remaining - num, num, used)
                used[num] -= 1
                if used[num] == 0:
                    del used[num]
    
    backtrack(N, 1, {})
    return count
