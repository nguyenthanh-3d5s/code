'''
Trạng thái đèn sau khi mọi người đi qua
Mô tả bài toán
k người đi qua một hành lang có 10 chiếc đèn được tắt. Mỗi người sẽ thao tác với các đèn theo thứ tự của mình, cụ thể là thao tác với các đèn có chỉ số là bội số của thứ tự của họ. Ví dụ, người thứ hai sẽ thao tác với các đèn có chỉ số là bội số của 2. Khi thao tác với một đèn tắt, đèn sẽ được bật lên, và khi thao tác với một đèn bật, đèn sẽ bị tắt. Sau khi tất cả mọi người đi qua, họ muốn biết trạng thái của các đèn.

Số người k sẽ được truyền vào như một tham số của hàm solution. Bạn cần viết hàm solution để trả về một mảng, trong đó các đèn bật được đánh dấu là true và các đèn tắt được đánh dấu là false. Hãy hoàn thành mã nguồn bằng cách điền vào các chỗ trống.

Giải thích tham số
Số người k được truyền vào như một tham số của hàm solution.

k là một số nguyên dương từ 1 đến 10.
Giải thích giá trị trả về
Hàm sẽ trả về một mảng, trong đó các đèn bật được đánh dấu là True và các đèn tắt được đánh dấu là False sau khi tất cả mọi người đã đi qua.

Ví dụ
k	return
2	[true,false,true,false,true,false,true,false,true,false]
Giải thích ví dụ
Trạng thái của các bóng đèn sẽ thay đổi như sau:
'''
def solution(k):
    answer = [False]*10
    for person in range(1, k+1):
        for multiple in range(person, 11, person):
            answer[multiple-1] = ​not answer[multiple-1]​
    return answer
