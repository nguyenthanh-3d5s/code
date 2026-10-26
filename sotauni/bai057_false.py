'''
Đếm số ô mà 'sang' có thể di chuyển
Vấn đề
Trong trò chơi cờ tướng, có một loại quân gọi là "sang" (象).

"Sang" di chuyển như hình ảnh dưới đây, tiến 1 ô và sau đó di chuyển 2 ô theo hướng chéo trái/phải.

image 1

Khi "sang" tiến 1 ô, nó có thể đi lên, xuống, trái hoặc phải, vì vậy tất cả các ô mà "sang" có thể di chuyển được như hình dưới đây.

Nếu không có quân nào khác trên đường đi sau khi "sang" tiến 1 ô và di chuyển 1 ô theo hướng chéo trái/phải, thì nó có thể di chuyển.

image 2

Khi "sang" không thể di chuyển, có những tình huống như sau:

Có quân khác ở hướng di chuyển
Có quân ở hướng đi thẳng
image 3
Có quân ở hướng chéo trái/phải khi tiến 1 ô
image 4
image 5
Cố gắng ra ngoài bàn cờ đã cho
image 6
Hãy hoàn thành hàm solution để trả về số ô mà "sang" có thể di chuyển trên bàn cờ hình vuông kích thước N x N.

Giới hạn
N là số tự nhiên từ 4 đến 10.
M là số quân, từ 1 đến 10.
Giá trị tại chỉ số 0 trong mảng pieces là vị trí của quân "sang" mà bạn muốn di chuyển, các giá trị khác là vị trí của các quân khác trên bàn cờ.
Ngoài trường hợp có quân ở hướng di chuyển, các quân khác không ảnh hưởng đến việc di chuyển của "sang".
Ví dụ
N	M	pieces	answer
7	1	[[3, 3]]	8
4	2	[[3, 2], [2, 2]]	0
7	1	[[3, 4]]	6
Giải thích ví dụ #1
Đây là trường hợp mà "sang" có thể di chuyển đến tất cả các ô như đã cho.
image 7

Giải thích ví dụ #2
Đây là trường hợp mà có quân khác ở hướng di chuyển thẳng.
image 8

Giải thích ví dụ #3
Đây là trường hợp mà "sang" cố gắng ra ngoài bàn cờ đã cho.
image 9
'''
