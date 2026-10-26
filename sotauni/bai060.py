'''
Tìm diện tích nhà lớn nhất
Vấn đề mô tả
Một mảng được cho với chiều dài cạnh dọc là 8, trong đó đất được biểu thị bằng 0 và khu vực nhà được biểu thị bằng 1. Nếu 1 được kết nối theo 4 hướng: trên, dưới, trái, phải, thì đó được coi là một ngôi nhà. Nhiệm vụ của chúng ta là tìm diện tích lớn nhất của ngôi nhà.

Ví dụ, khi khu vực nhà được thể hiện trong hình dưới đây, diện tích của ngôi nhà màu vàng, xanh lá, đỏ, và xanh dương lần lượt là 5, 2, 6, 1. Do đó, diện tích lớn nhất của ngôi nhà là 6.



Đất được biểu thị bằng 0, khu vực nhà được biểu thị bằng 1 trong mảng plan, chiều dài hàng của plan là plan_rows, chiều dài cột của plan là plan_cols được truyền vào như tham số của hàm solution. Chúng ta cần viết hàm solution để trả về diện tích lớn nhất của ngôi nhà. Vui lòng điền vào các chỗ trống để hoàn thành mã.

Mô tả tham số
Mảng 2 chiều plan được biểu thị bằng 0 cho đất và 1 cho khu vực nhà, chiều dài hàng của plan là plan_rows, chiều dài cột của plan là plan_cols được truyền vào như tham số của hàm solution.

Các phần tử của plan chỉ gồm 0 và 1.
plan_rows là 8.
plan_cols nằm trong khoảng từ 5 đến 100.
Không có trường hợp nào không có nhà.
Mô tả giá trị trả về
Vui lòng trả về diện tích lớn nhất của ngôi nhà.

Ví dụ
plan	plan_rows	plan_cols	return
[[0, 1, 1, 0, 0],			
[0, 1, 1, 0, 0],			
[0, 0, 1, 0, 0],			
[1, 1, 0, 0, 1],			
[0, 0, 1, 1, 1],			
[0, 0, 1, 0, 0],			
[0, 0, 1, 0, 0],			
[0, 0, 0, 1, 0]]	8	5	6
[[0, 1, 1, 0, 1, 0, 1],			
[0, 1, 1, 1, 1, 0, 1],			
[0, 1, 1, 1, 1, 0, 1],			
[0, 1, 1, 1, 1, 0, 1],			
[0, 0, 1, 0, 0, 0, 1],			
[1, 1, 0, 0, 1, 0, 1],			
[0, 0, 1, 1, 1, 0, 1],			
[0, 0, 0, 1, 0, 0, 1]]	8	7	16
Ví dụ 1: Diễn giải như trên.
Ví dụ 2: Diện tích lớn nhất trong số các ngôi nhà được kết nối theo 4 hướng là 16.
'''
def solution(plan):
    answer = 0
    stack = []
    for i in range(len(plan)):
        for j in range(len(plan[0])):
            if ​plan[i][j] == 0​:
                continue
            size = 1
            plan[i][j] = 0
            stack.append([i, j])
            while stack:
                axis = ​stack.pop()​
                x = axis[0]
                y = axis[1]
                if x - 1 >= 0 and plan[x - 1][y] == 1:
                    plan[x - 1][y] = 0
                    stack.append([x - 1, y])
                    size += 1
                if x + 1 < len(plan) and plan[x + 1][y] == 1:
                    plan[x + 1][y] = 0
                    stack.append([x + 1, y])
                    size += 1
                if y - 1 >= 0 and plan[x][y - 1] == 1:
                    plan[x][y - 1] = 0
                    stack.append([x, y - 1])
                    size += 1
                if y + 1 < len(plan[0]) and plan[x][y + 1] == 1:
                    plan[x][y + 1] = 0
                    stack.append([x, y + 1])
                    size += 1
            answer = ​max(answer, size)​
    return answer
