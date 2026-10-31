'''
Cuộc đua giữa thỏ và rùa
Vấn đề mô tả
Khi thỏ và rùa tham gia một cuộc đua, chúng ta muốn biết động vật nào đến đích trước và thời gian đến đích của nó. Quy tắc cuộc đua như sau:

Thỏ sẽ bắt đầu chạy sau khi rùa xuất phát và sau một khoảng thời gian chờ wait.
Ví dụ:

rabbit1

Tại một khoảng cách 15km từ đích, thỏ có tốc độ 4km/h và rùa có tốc độ 3km/h sẽ tham gia cuộc đua.

turtle1

Rùa xuất phát và sau 2 giờ, thỏ bắt đầu chạy, trong thời gian đó, rùa đã di chuyển được 3 x 2 = 6km.

result1

Sau khi thỏ xuất phát, sau 3 giờ, rùa đã di chuyển thêm 9km và thỏ đã di chuyển 12km. Lúc này, rùa đã di chuyển tổng cộng 15km và đến đích trước. Do đó, rùa đến trước và thời gian đến đích là 5 giờ.

Tốc độ của thỏ là rabbit, tốc độ của rùa là turtle, khoảng cách đến đích là track và thời gian chờ của thỏ là wait được truyền vào như các tham số của hàm solution. Bạn cần viết hàm solution để trả về động vật đến trước và thời gian đến đích. Tuy nhiên, một phần của mã bị sai và không hoạt động đúng. Hãy sửa mã đã cho để nó xử lý tất cả các đầu vào một cách chính xác.

Chỉ cần sửa một dòng mã.

Mô tả tham số
Tốc độ của thỏ rabbit, tốc độ của rùa turtle, khoảng cách đến đích track và thời gian chờ n được truyền vào như các tham số của hàm solution.

rabbit và turtle là các số nguyên dương từ 1 đến track.
track là số nguyên dương từ 1 đến 100,000.
n là số nguyên dương từ 1 đến 100,000.
Thời gian hoàn thành của thỏ và rùa phải có sự chênh lệch ít nhất 1 giờ.
Nếu thời gian của rùa là 3 giờ, thì thời gian của thỏ phải là 4 giờ trở lên hoặc 2 giờ trở xuống.
Nếu động vật đến trước là thỏ, trả về 0, nếu là rùa, trả về 1.
Mô tả giá trị trả về
Trả về động vật đến trước và thời gian đến đích.

Ví dụ
rabbit	turtle	track	wait	return
4	3	15	2	[1, 5]
6	4	23	1	[0, 5]
Ví dụ 1:
Thời gian	Khoảng cách thỏ (km)	Khoảng cách rùa (km)
1	0	3
2	0	6
3	4	9
4	8	12
5	12	15
Sau 5 giờ, thỏ đã di chuyển 12km và rùa đã di chuyển 15km, rùa đã hoàn thành 15km track trước.

Ví dụ 2:
Thời gian	Khoảng cách thỏ (km)	Khoảng cách rùa (km)
1	0	4
2	6	8
3	12	12
4	18	16
5	24	20
Sau 5 giờ, thỏ đã di chuyển 24km và rùa đã di chuyển 20km, thỏ đã hoàn thành 23km track trước.
'''
import math

def getFin(track, speed):
    return math.ceil(track / speed)

def solution(rabbit, turtle, track, n):
    answer = []
    turtle_fin = getFin(track, turtle)
    rabbit_fin = getFin(track, rabbit)
    rabbit_fin += n
    if turtle_fin < rabbit_fin:
        answer = [1, turtle_fin]
    elif turtle_fin > rabbit_fin:
        answer = [0, rabbit_fin]
    return answer
