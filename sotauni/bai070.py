'''
Bài toán lắp ráp linh kiện
Mô tả câu hỏi
Dưới đây là bài toán yêu cầu điền vào chỗ trống trong code cơ bản sao cho thỏa mãn yêu cầu.

Trong một nhà máy nọ có N công nhân. Nhà máy có M linh kiện cần lắp ráp và chúng chạy lần lượt ra theo thứ tự trên đường băng chuyền. Khi linh kiện chạy ra, người công nhân số 1 sẽ lắp ráp linh kiện đó theo tuần tự. Giả dụ, người công nhân nhận linh kiện đầu tiên tiến hành lắp ráp thì người công nhân ở phía sau sẽ không thể lắp linh kiện đó. Ví dụ, nếu không có ai lắp ráp linh kiện này thì linh kiện đó sẽ giữ nguyên trạng thái chưa hoàn thiện và bị chất vào kho.

N công nhân có một danh sách các linh kiện mà mỗi người có thể lắp ráp. Không liên quan đến thứ tự các linh kiện được ghi trong danh sách, nếu một linh kiện mà bản thân có thể lắp ráp xuất hiện trước mắt thì bắt buộc phải lắp. Ví dụ, nhận được một linh kiện không nằm trong danh sách thì sẽ không tiến hành lắp ráp mà chuyển sang cho người công nhân tiếp theo. Tuy nhiên, với mỗi loại linh kiện, người công nhân chỉ được phép lắp ráp tối đa 1 chiếc.

Cho danh sách linh kiện của từng người và M linh kiện theo thứ tự, hãy điền vào chỗ trống để hoàn thiện hàm solution trả về mảng chứa số lượng linh kiện mà mỗi người sẽ lắp theo đúng thứ tự.

Cho input như ví dụ dưới đây.

Biến	Ý nghĩa	Giá trị
N	Số công nhân	3
M	Số lượng linh kiện phải lắp ráp	5
parts	Danh sách linh kiện mà công nhân có thể lắp ráp	"2 1 6,3 2 3 5,1 1"
seq	Danh sách linh kiện	[3, 2, 1, 4, 5, 1]
Cho N số lượng công nhân và M số lượng linh kiện dưới dạng tham số.

Sau đó, cho thông tin linh kiện mà mỗi công nhân sẽ lắp ráp dưới dạng chuỗi ký tự, các thông tin về công nhân được phân tách bằng ,(dấu phẩy). Dựa theo , (dấu phẩy), cho K số lượng linh kiện và danh sách linh kiện mà mỗi công nhân có thể lắp ráp dưới dạng đơn vị khoảng trống,

Sau đó cho mảng chứa thứ tự đi lên băng chuyển của các linh kiện.

image 1

Cho thứ tự linh kiện lần lượt là 3 2 1 4 5. Trong đó, linh kiện số 3 và linh kiện số 2 chỉ có duy nhất người công nhân số 2 có thể lắp ráp nên người công nhân số 2 sẽ lắp ráp hai linh kiện này.

image 2

Sau đó linh kiện số 1 được cung cấp, tuy nhiên vì người công nhân số 1 đã lắp trước nên người công nhân số 3 không thể lắp linh kiện số 1 này được.

image 3

Sau đó linh kiện số 4 xuất hiện, tuy nhiên trong danh sách lại không có ai được chỉ định lắp linh kiện số 4 nên không thể tiến hành lắp ráp, vì vậy nó được di chuyển về kho.

image 4

Sau đó, người công nhân số 2 tiến hành lắp ráp linh kiện số 5.

image 5

Cuối cùng, linh kiện số 1 xuất hiện thêm 1 lần nữa. Khi đó, người công nhân số 1 vì đã từng lắp linh kiện số 1 trước đó nên lần này sẽ không lắp nữa. Vì vậy, người công nhân số 3 có thể lắp linh kiện số 1 và người này đã tiến hành lắp ráp. Tổng kết thành phẩm lắp ráp của tất cả công nhân, ta có kết quả như dưới.

Người công nhân số 1 lắp được tổng một chiếc - linh kiện số 1.
Người công nhân số 2 lắp được tổng 3 chiếc - linh kiện số 2, số 3, số 5.
Người công nhân số 3 lắp được tổng một chiếc - linh kiện số 1.
Theo đó, nếu liệt kê số lượng linh kiện mà các công nhân đã lắp ráp theo thứ tự, ta có mảng kết quả là [ 1, 3, 1 ]

Các tham số đầu vào
1 <= N <= 20
1 <= M <= 40
1 <= Mã số của linh kiện <= 9
Kiểu trả về
Trả về mảng kết quả chứa số linh kiện mà mỗi công nhân đã lắp ráp, tương ứng với đúng mã số của người công nhân đó.
Ví dụ
N	M	parts	seq	return
3	6	"2 1 6,3 2 3 5,1 1"	[ 3, 2, 1, 4, 5, 1 ]	[ 1, 3, 1 ]
5	10	"3 1 2 3,4 4 5 6 7,4 8 9 1 2,1 1,3 1 2 3"	[1, 2, 3, 1, 2, 3, 1, 4, 5, 9]	[3, 2, 3, 1, 1]
#1 Ví dụ : Tương tự ví dụ đã cho trong bài. #2 Ví dụ :

Ban đầu, 3 linh kiện số 1,2,3 do người công nhân số 1 lắp ráp.
Tiếp theo, 2 linh kiện số 1,2 do người công nhân số 3 lắp ráp.
Tiếp theo, 1 linh kiện số 3 do người công nhân số 5 lắp ráp.
Tiếp theo, 1 linh kiện số 1 do người công nhân số 4 lắp ráp.
Tiếp theo, 2 linh kiện số 4,5 do người công nhân số 2 lắp ráp.
Tiếp theo, 1 linh kiện số 9 do người công nhân số 3 lắp ráp
Mảng kết quả sẽ là [3, 2, 3, 1, 1].
'''
def solution(N, M, parts, seq):

    answer = [0] * N

    workers = []

    for line in parts.split(​","​):
        k, *menu_list = ​line.split(" ")​
        workers.append(list(map(int, menu_list)))

    for part in seq:

        for i in range(N):
            if part in workers[i]:
                answer[i] += ​1​
                workers[i].remove(​part​)
                break

    return answer
