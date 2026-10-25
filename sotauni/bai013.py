'''
Bài toán tham quan hội chợ điện tử
Mô tả bài toán
Bài toán này yêu cầu bạn điền vào các chỗ trống trong mã nguồn sao cho thỏa mãn yêu cầu đã cho.

Tae-han đã tham gia hội chợ điện tử KOREA với 6 gian hàng (từ 1 đến 6) đang hoạt động như hình dưới đây.

Mỗi gian hàng có từ 1 đến 3 gian hàng liên kết và chỉ có thể di chuyển giữa các gian hàng liên kết.

Tae-han dự định sẽ thăm tất cả các gian hàng, nhưng thứ tự thăm có thể thay đổi tùy thuộc vào gian hàng nào được thăm đầu tiên.

Nếu một gian hàng có 2 gian hàng lân cận trở lên, Tae-han sẽ lên kế hoạch thăm theo thứ tự từ gian hàng có số nhỏ hơn trước, và sẽ không quay lại gian hàng đã thăm.

Tuy nhiên, nếu vì lý do bất khả kháng mà phải đi qua một gian hàng đã thăm trước đó để di chuyển đến gian hàng khác, thì trường hợp này sẽ được coi là ngoại lệ và không được ghi nhận là quay lại.

Khi được cung cấp một mảng 2 chiều chứa số hiệu các gian hàng lân cận của mỗi gian hàng, và một biến số nguyên start là số hiệu gian hàng mà Tae-han sẽ thăm đầu tiên, hãy điền vào chỗ trống trong hàm solution để xuất ra số hiệu gian hàng mà Tae-han sẽ thăm thứ k.

Hình ảnh

Tham số
booths: Biến được biểu diễn dưới dạng mảng 2 chiều chứa bản đồ hội chợ điện tử KOREA
booths = [ [ -1,-1,4 ], [ -1,5,6 ] , [ -1,-1,4 ] , [ 1,3,5 ] , [ -1,2,4 ] , [ -1,-1,2 ] ]
Gồm 6 phần tử, mỗi phần tử lần lượt biểu diễn tập hợp các gian hàng lân cận của gian hàng từ 1 đến 6.
Tập hợp lân cận của mỗi gian hàng được lưu trữ dưới dạng mảng 1 chiều với các số hiệu lân cận theo thứ tự tăng dần.
Mỗi gian hàng luôn được biểu diễn bằng 3 phần tử, nếu có ít hơn 3 lân cận thì các lân cận không tồn tại sẽ được biểu diễn bằng -1.
start: Số hiệu gian hàng mà Tae-han sẽ thăm đầu tiên, là một biến số nguyên.
Có giá trị từ 1 đến 6.
k: Biến số nguyên biểu thị thứ tự gian hàng mà Tae-han sẽ thăm.
Có giá trị từ 1 đến 6.
Kiểu trả về
answer: Biến số nguyên lưu trữ số hiệu gian hàng mà Tae-han sẽ thăm thứ k.
Ví dụ
booths	start	k	answer
[ [ -1,-1,4 ], [ -1,5,6 ] , [ -1,-1,4 ] , [ 1,3,5 ] , [ -1,2,4 ] , [ -1,-1,2 ] ]	4	3	3
[ [ -1,-1,4 ], [ -1,5,6 ] , [ -1,-1,4 ] , [ 1,3,5 ] , [ -1,2,4 ] , [ -1,-1,2 ] ]	6	1	6
booths: Biến biểu diễn bản đồ hội chợ điện tử KOREA dưới dạng mảng 2 chiều.
Phần tử đầu tiên [-1, -1, 4]: Tập hợp lân cận của gian hàng 1.
Có 1 lân cận là 4 (trong 3 phần tử cố định, 2 phần tử không tồn tại được biểu diễn bằng -1).
Phần tử thứ hai [-1, 5, 6]: Tập hợp lân cận của gian hàng 2.
Có 2 lân cận là 5 và 6.
Phần tử thứ ba [-1, -1, 4]: Tập hợp lân cận của gian hàng 3.
Có 1 lân cận là 4.
Phần tử thứ tư [1, 3, 5]: Tập hợp lân cận của gian hàng 4.
Có 3 lân cận là 1, 3 và 5.
Phần tử thứ năm [-1, 2, 4]: Tập hợp lân cận của gian hàng 5.
Có 2 lân cận là 2 và 4.
Phần tử thứ sáu [-1, -1, 2]: Tập hợp lân cận của gian hàng 6.
Có 1 lân cận là 2.
start: Số hiệu gian hàng mà Tae-han sẽ thăm đầu tiên, trong ví dụ là gian hàng 4.
Trong trường hợp này, Tae-han sẽ thăm theo thứ tự 4 - 1 - 3 - 5 - 2 - 6.
Kết quả: Trong ví dụ, với k = 3, số hiệu gian hàng thứ 3 trong thứ tự thăm (4 - 1 - 3 - 5 - 2 - 6) là 3, do đó answer sẽ lưu giá trị 3 và xuất ra.
Giải thích ví dụ
Ví dụ #1
Giống như mô tả ở trên.

Ví dụ #2
Bắt đầu thăm từ gian hàng 6, Tae-han sẽ thăm theo thứ tự 6 - 2 - 5 - 4 - 1 - 3, do đó trả về số hiệu gian hàng 6.
'''
def visit(booths, start, visited):
    visited.append(start)
        
    for booth in booths[start-1]:
        if booth != ​-1​:
            if booth not in visited:
                visit(​booths, booth, visited​)
                
    return visited       
    
def solution(booths, start, k):
    answer = 0
    visited = []
    visit(booths, start, visited)
    
    answer = ​visited[k - 1]​
    return answer
