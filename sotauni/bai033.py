'''
Tìm học sinh có điểm cao nhất
Vấn đề mô tả
10 câu hỏi trắc nghiệm được đưa ra trong bài kiểm tra và đáp án của N học sinh được nộp theo thứ tự.

Điểm số của mỗi câu hỏi là khác nhau và nếu đáp án của học sinh trùng với đáp án đúng, học sinh sẽ nhận được điểm cho câu hỏi đó. Lưu ý rằng điểm tối đa có thể không phải là 100 điểm.

Ví dụ, thông tin câu hỏi và đáp án của học sinh có thể được đưa ra như dưới đây:

Thông tin ví dụ

Các câu hỏi sai của mỗi học sinh được đánh dấu bằng màu đỏ, các câu hỏi đúng được đánh dấu bằng màu xanh. Khi tổng điểm của các câu hỏi đúng được cộng lại, học sinh thứ hai nộp bài đã đạt 80 điểm, là điểm cao nhất.

Khi biết số lượng học sinh N, mảng 1 chiều answer chứa đáp án đúng của 10 câu hỏi, mảng 1 chiều score chứa điểm số của từng câu hỏi, và mảng 2 chiều students chứa đáp án của học sinh theo thứ tự nộp, hãy viết hàm solution để tìm ra học sinh nào có điểm cao nhất. Hãy sửa mã để nó có thể xử lý tất cả các đầu vào một cách chính xác. Chỉ cần sửa một dòng mã.

Nếu có nhiều học sinh có điểm cao nhất, hãy trả về học sinh nộp bài trước.

Mô tả tham số
N (1 ≤ N ≤ 50)
answer: mảng 1 chiều chứa đáp án đúng của 10 câu hỏi (1 ≤ answer[i] ≤ 5)
score: mảng 1 chiều chứa điểm số của 10 câu hỏi (1 ≤ score[i] ≤ 100)
students: mảng 2 chiều chứa đáp án của học sinh (1 ≤ students[i][j] ≤ 5)
Mô tả giá trị trả về
Trả về thứ tự của học sinh có điểm cao nhất. Nếu có nhiều học sinh đạt điểm cao nhất bằng nhau, hãy trả về học sinh có thứ tự nhỏ nhất (nộp bài trước).
Ví dụ
N	answer	score	students	return
5	[4, 2, 4, 1, 3, 2, 2, 4, 1, 3]	[11, 1, 4, 23, 3, 17, 5, 12, 3, 4]	[[4, 2, 4, 1, 1, 2, 3, 1, 1, 3], [4, 2, 4, 1, 4, 2, 2, 4, 1, 3], [4, 3, 4, 2, 3, 2, 2, 4, 1, 3], [4, 2, 4, 1, 4, 4, 3, 1, 1, 3], [4, 2, 4, 2, 3, 2, 2, 4, 1, 3]]	2
Ví dụ 1: Như mô tả ở trên.
Ví dụ 2: Học sinh thứ 3 nộp bài đã đạt 119 điểm, là điểm cao nhất.
'''
def solution(N,  answer,  score,  students):
    maxScore = -1
    topStudent = -1
    
    for i in range(N):
        studentScore = 0
        
        for j in range(10):
            if answer[j] == students[i][j]:
                studentScore += score[j]
                
            if maxScore < studentScore:
                maxScore = studentScore
                topStudent = i
                
    return topStudent + 1
