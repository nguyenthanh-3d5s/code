'''
Tính điểm trung bình và số sinh viên cuối cùng nộp bài
Mô tả câu hỏi
Câu hỏi này yêu cầu điền vào chỗ trống trong mã nguồn cơ bản được cung cấp để hoàn thành nhiệm vụ.

Bạn là một giáo sư làm việc tại Khoa Khoa học Máy tính của một trường đại học trực tuyến, và bạn sẽ nhập điểm của bài tập thực hành từ sinh viên của mình theo thứ tự đến trước.

Bạn sẽ viết một chương trình để kiểm tra điểm trung bình của tổng (N) sinh viên đã nộp bài tập thực hành và số sinh viên của sinh viên cuối cùng đã nộp bài, sử dụng điểm số và số sinh viên làm đầu vào.

Dựa trên những yêu cầu này, bản thiết kế sau đây đã được thiết kế.

image 1

Ví dụ, [[2, 10], [3, 30], [1, 20]] đại diện cho số sinh viên và điểm bài tập thực hành của tổng cộng 3 sinh viên.

Điểm trung bình là 20, và số sinh viên cuối cùng nộp bài được xác định là 1.

Vui lòng điền vào tất cả các chỗ trống để hoàn thành toàn bộ mã.

Tham số
Số sinh viên và điểm sẽ được nhập dưới dạng một danh sách hai chiều các số nguyên.

Kiểu trả về
Bạn nên có thể xác định [điểm trung bình của bài tập thực hành, số sinh viên của lần nộp cuối cùng].

Bất kỳ điểm thập phân nào trong giá trị của điểm trung bình bài tập thực hành sẽ bị cắt bỏ.

Ví dụ
Ví dụ	Đầu vào	Đầu ra
# 1	[[1,85], [3,21], [2,30]]	[45, 2]
# 2	[[7,80], [9,91], [2,33], [3, 10]]	[53, 3]
Ví dụ 1: Nó trả về điểm trung bình của ba điểm bài tập thực hành và số của sinh viên cuối cùng đã nộp.
Ví dụ 2: Nó trả về điểm trung bình của bốn điểm bài tập thực hành và số của sinh viên cuối cùng đã nộp.
'''
class Student:
    def  __init__(​self, studentNumber, score​):
        self.studentNumber = studentNumber
        self.score = score

    def getStudentNumber(self) :
        return ​self.studentNumber​
    def getScore(self) :
        return ​self.score​

class StudentScores:
    def  __init__(self):
        self.list = []
        
    def addStudent(self, stu) :
        self.list.append(stu)
        
    def getTotalScores(self):
        totalScores = 0;
        for stu in self.list :
            totalScores += stu.getScore()
        return totalScores
    
    def getAverageScore(self) :
        return ​self.getTotalScores() // len(self.list)​
    
    def getList(self) :
        return self.list       
        
def solution(in_data):
    answer = []
    dao = StudentScores()
    
    for i in range(0, len(in_data)): 
        dao.addStudent(​Student(in_data[i][0], in_data[i][1])​)
    
    answer.append(dao.getAverageScore())
    answer.append(​dao.getList()[-1].getStudentNumber()​)
    
    return  answer
