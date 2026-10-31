'''
Tham quan hội chợ điện tử KOREA
Mô tả
Taehan đã tham dự hội chợ điện tử KOREA với 6 gian hàng (từ 1 đến 6) đang hoạt động như hình dưới đây.

Mỗi gian hàng có từ 1 đến 3 gian hàng liên kết và chỉ có thể di chuyển giữa các gian hàng liên kết.

Taehan dự định sẽ thăm tất cả các gian hàng, nhưng thứ tự thăm có thể thay đổi tùy thuộc vào gian hàng nào được thăm đầu tiên. Nếu một gian hàng có 2 hoặc nhiều gian hàng hàng xóm, Taehan sẽ lên kế hoạch thăm theo thứ tự từ gian hàng có số nhỏ hơn. Một khi đã thăm một gian hàng, Taehan sẽ không quay lại thăm gian hàng đó nữa.

Tuy nhiên, nếu cần phải đi qua một gian hàng đã thăm trước đó để di chuyển đến gian hàng khác, trường hợp này sẽ được coi là ngoại lệ và không được ghi nhận là quay lại thăm.

Khi được cho một mảng 2 chiều chứa số gian hàng hàng xóm của mỗi gian hàng booths và một biến số nguyên start là gian hàng mà Taehan sẽ thăm đầu tiên, hãy hoàn thành chương trình để xuất ra số gian hàng mà Taehan sẽ thăm thứ k.

Hình minh họa

Tham số
booths: Mảng 2 chiều chứa bản đồ hội chợ điện tử KOREA.

booths = [ [ -1,-1,4 ], [ -1,5,6 ] , [ -1,-1,4 ] , [ 1,3,5 ] , [ -1,2,4 ] , [ -1,-1,2 ] ]
Gồm 6 phần tử, mỗi phần tử đại diện cho tập hợp các gian hàng hàng xóm của gian hàng từ 1 đến 6.
Tập hợp hàng xóm của mỗi gian hàng được lưu trữ trong mảng 1 chiều theo thứ tự tăng dần.
Nếu một gian hàng có ít hơn 3 hàng xóm, các hàng xóm không tồn tại sẽ được biểu diễn bằng -1.
start: Số gian hàng mà Taehan sẽ thăm đầu tiên, là một biến số nguyên.

Có giá trị từ 1 đến 6.
k: Biến số nguyên biểu thị thứ tự gian hàng mà Taehan sẽ thăm.

Có giá trị từ 1 đến 6.
Giá trị trả về
answer: Biến số nguyên lưu trữ số gian hàng mà Taehan sẽ thăm thứ k.
Ví dụ (Giải thích hình)
booths	start	k	answer
[[ -1,-1,4 ], [ -1,5,6 ] , [ -1,-1,4 ] , [ 1,3,5 ] , [ -1,2,4 ] , [ -1,-1,2 ]]	4	3	3
booths: Biến mảng 2 chiều chứa bản đồ hội chợ điện tử KOREA.

Phần tử đầu tiên [-1, -1, 4]: Tập hợp hàng xóm của gian hàng 1.

Có 1 hàng xóm là gian hàng 4 (2 hàng xóm còn lại không tồn tại, được biểu diễn bằng -1).
Phần tử thứ hai [-1, 5, 6]: Tập hợp hàng xóm của gian hàng 2.

Có 2 hàng xóm là gian hàng 5 và 6.
Phần tử thứ ba [-1, -1, 4]: Tập hợp hàng xóm của gian hàng 3.

Có 1 hàng xóm là gian hàng 4.
Phần tử thứ tư [1, 3, 5]: Tập hợp hàng xóm của gian hàng 4.

Có 3 hàng xóm là gian hàng 1, 3 và 5.
Phần tử thứ năm [-1, 2, 4]: Tập hợp hàng xóm của gian hàng 5.

Có 2 hàng xóm là gian hàng 2 và 4.
Phần tử thứ sáu [-1, -1, 2]: Tập hợp hàng xóm của gian hàng 6.

Có 1 hàng xóm là gian hàng 2.
start: Gian hàng đầu tiên mà Taehan sẽ thăm là gian hàng 4.

Trong trường hợp này, Taehan sẽ thăm các gian hàng theo thứ tự: 4 - 1 - 3 - 5 - 2 - 6.
Giá trị xuất ra: Với k = 3, Taehan sẽ thăm gian hàng thứ 3 trong thứ tự đã xác định (4 - 1 - 3 - 5 - 2 - 6), tức là gian hàng 3, và lưu vào biến answer để xuất ra.
'''
def visit(booths, start, visited):
    visited.append(start)
        
    for booth in ​booths[start - 1]​:
        if ​booth​ != -1:
            if ​booth​ not in visited:
                ​visit(booths, booth, visited)​
                
    return visited       
    
def solution(booths, start, k):
    answer = 0
    visited = []
    ​visit(booths, start, visited)​
    
    answer = ​visited[k - 1]​
    return answer
