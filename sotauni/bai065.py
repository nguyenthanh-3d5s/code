'''
Tìm khu vực an toàn trên MAP
Tìm khu vực an toàn trên MAP
Một trận chiến đang xảy ra trên MAP (array 2 chiều) có kích thước 7 x 5. Tại MAP này có những quả mìn được giấu ở các vị trí (y,x). Những quả mìn này sẽ đồng loạt nổ vào cùng một thời điểm, tại vị trí mìn phát nổ và những vị trí trên dưới trái phải liền kề sẽ trở thành đống đổ nát. Để có thể đột kích vào căn cứ địch ngay sau khi mìn phát nổ, tướng MacCoding muốn tìm ra các khu vực an toàn giữa những quả mìn để bố trí sẵn đội quân chờ ở đó. Hãy điền vào chỗ trống và hoàn thiện hàm solution trả về số lượng các khu vực an toàn có trên MAP được cho.

Giới hạn
Cố định kích thước MAP có chiều dọc là 7, chiều ngang 5
Trên MAP đã cho, 0 là ô an toàn không có mìn, 1 là ô đã cài mìn.
Ví dụ
MAP	return
["01010", "10000", "00010", "00100", "00110", "11000", "00001"]	6
Giải thích ví dụ
Trực quan hóa MAP đã cho ở trên dưới dạng mảng có kích thước 7x5 như sau.

1 là mìn và trong MAP đã cho, 0 được kí hiệu là ô trống để dễ nhìn hơn.

image 1

Nếu những quả mìn trên MAP phát nổ và các khu vực trên dưới trái phải lân cận trở thành đống đổ nát thì tất cả các ô được tô màu ở dưới đây sẽ trở thành khu vực nguy hiểm.

image 2

Nghĩa là có 6 khu vực an toàn để tướng MacCoding có thể bố trí đội quân.
'''
def solution(MAP):
    
    answer = 0

    afterMAP = [[0 for _ in range(5)] for _ in range(7)]

    ydir = [0, 0, 0, 1, -1]
    xdir = [0, 1, -1, 0, 0]

    for i in range(7):
        for j in range(5): 
            if MAP[i][j] == "1":
                for ​k in range(5)​:
                    ny = i + ydir[k]
                    nx = j + xdir[k]
                    if ​ny < 0 or ny >= 7 or nx < 0 or nx >= 5​:
                        continue
                    afterMAP[ny][nx] = 1

    for i in range(7):
        for j in range(5):
            if ​afterMAP[i][j] == 0​:
                answer += 1
                
    return answer
