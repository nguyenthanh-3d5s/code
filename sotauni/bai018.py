'''
Bài toán kiểm tra quy tắc chơi bài
Vấn đề mô tả
Bài toán này yêu cầu bạn viết hàm solution để thỏa mãn các yêu cầu đã cho.

Bạn có 4 người bạn đang chơi một trò chơi bài. 4 người này được gọi là người chơi 1, 2, 3, 4.

Khi trò chơi bắt đầu, mỗi người chơi nhận được 6 lá bài và trong quá trình chơi, họ phải nộp tất cả.

Trong 6 lá bài, 3 lá là J, Q, K và 3 lá còn lại là các số nguyên ngẫu nhiên từ 2 đến 9.

Các lá bài số có thể được nộp bất cứ lúc nào mà không cần theo thứ tự, nhưng J, Q, K phải được nộp theo thứ tự.

Khi bạn được cung cấp một mảng chuỗi 1 chiều cards chứa 6 lá bài mà người chơi 1, 2, 3, 4 đã nộp, hãy hoàn thành hàm solution để xuất ra mảng số nguyên 1 chiều answer chứa số hiệu của tất cả người chơi đã tuân thủ quy tắc.

Tham số
Tham số là cards, là mảng chuỗi 1 chiều chứa 6 lá bài mà người chơi 1, 2, 3, 4 đã nộp theo thứ tự.
(Ví dụ) cards = [ "8Q2JK3", "J7QK32", "4JQK29", "JK32Q4"]
cards = [ chuỗi 6 lá bài mà người chơi 1 nộp, chuỗi 6 lá bài mà người chơi 2 nộp, chuỗi 6 lá bài mà người chơi 3 nộp, chuỗi 6 lá bài mà người chơi 4 nộp]
Trong 6 lá bài được phát cho mỗi người chơi không có số trùng lặp hoặc lá bài chữ cái trùng lặp.
Kiểu trả về
answer: mảng số nguyên 1 chiều chứa số hiệu của các người chơi đã tuân thủ quy tắc.
Mỗi phần tử là một số nguyên từ 1 đến 4.
Ví dụ
cards	answer
[ "8Q2JK3", "J7QK32", "4JQK29", "JK32Q4" ]	[2, 3]
[ "43JQK2", "356JQK", "J2Q3K4", "54QJK6" ]	[1, 2, 3]
Giải thích ví dụ
Thứ tự các lá bài mà mỗi người chơi đã nộp (từ lá bài nộp đầu tiên đến lá bài nộp cuối cùng):

Người chơi 1: 8 - Q - 2 - J - K - 3
Người chơi 2: J - 7 - Q - K - 3 - 2
Người chơi 3: 4 - J - Q - K - 2 - 9
Người chơi 4: J - K - 3 - 2 - Q - 4
Đánh giá việc tuân thủ quy tắc (đánh giá xem J - Q - K có được nộp theo thứ tự không):

Người chơi 1: Q - J - K (vi phạm quy tắc)
Người chơi 2: J - Q - K (tuân thủ quy tắc)
Người chơi 3: J - Q - K (tuân thủ quy tắc)
Người chơi 4: J - K - Q (vi phạm quy tắc)
Trong ví dụ, người chơi 2 và người chơi 3 đã tuân thủ quy tắc, vì vậy họ được lưu vào answer và trả về.

answer = [2, 3]
Ví dụ giải thích
Ví dụ #1
Giống như mô tả ở trên.

Ví dụ #2
Người chơi 1, 2, 3 đã tuân thủ quy tắc, vì vậy trả về [1, 2, 3].
'''
def solution(cards):
    answer = []
    
    for i, hand in enumerate(cards):
        pos_J = hand.find('J')
        pos_Q = hand.find('Q')
        pos_K = hand.find('K')
        
        if pos_J < pos_Q < pos_K:
            answer.append(i + 1)
    
    return answer
