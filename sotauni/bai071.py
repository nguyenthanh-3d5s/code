'''
Tính Tổng Các Phần Tử Trong Tập Hợp Hoán Vị
| Mô tả câu hỏi Dưới đây là bài toán yêu cầu điền vào chỗ trống trong code cơ bản sao cho thỏa mãn yêu cầu. Hoán vị là việc sắp xếp lại một tập dữ liệu tùy ý sao cho thứ tự của các phần tử có ý nghĩa. Trường hợp có tập dữ liệu [1, 2, 3], ta chọn ra 2 phần tử và sắp xếp chúng theo thứ tự từ điển thì sẽ thu được kết quả như [Bảng 1].

[Bảng 1]

Ta có phạm vi số (numRange) và số lượng dữ liệu cần chọn (selectCount), và mục tiêu là tìm vị trí cụ thể (findOrderedPermIdx) trong danh sách các tập hợp được liệt kê theo thứ tự từ điển, sau đó tính tổng các phần tử trong tập hợp đó. Ví dụ, trong một tập dữ liệu gồm 3 phần tử như [Bảng 1], ta chọn 2 phần tử để tạo các tập hợp khác theo thứ tự từ điển, thì tập hợp dữ liệu thứ 5 (findOrderedPermIdx) sẽ là [3, 1] và tổng các phần tử trong tập hợp này là 4. Hãy xem một ví dụ khác.

Biến	Giá trị	Giải thích
numRange	5	Số tự nhiên từ 1 đến numRange
numList	[1, 2, 3, 4, 5]	Tập hợp dữ liệu được sắp xếp đến numRange
selectCount	2	Tập hợp dữ liệu chứa 2 số tự nhiên làm phần từ
findOrderedPermIdx	30	Tập hợp dữ liệu thứ 30, sau khi sắp xếp theo thứ tự từ điển
Phạm vi số (numRange) có nghĩa là tập dữ liệu từ 1 đến một số tự nhiên cho trước. Ví dụ, nếu numRange là 5, nghĩa là từ 1 đến 5 và numList sẽ là [1, 2, 3, 4, 5]. Số lượng phần tử cần chọn (selectCount) có nghĩa là tập hợp dữ liệu chứa 2 phần tử nằm trong [1, 2, 3, 4, 5], ví dụ như [1, 2], [1, 3], [1, 4],... Vị trí cụ thể (findOrderedPermIdx) trong danh sách các tập hợp được liệt kê theo thứ tự từ điển, nếu chọn 2 phần tử trong 5 phần tử và liệt kê chúng theo thứ tự từ điển thì có thể được biểu diễn như [Bảng 3] dưới đây.

[Bảng 3]

Trong danh sách các tập hợp hoán vị chứa 2 phần tử được chọn trong 5 phần tử, không tồn tại dữ liệu thứ 30 nên trả về giá trị 0. Ví dụ, khi truy vấn dữ liệu thứ 18, kết quả sẽ là [5, 2], trả về tổng của các phần tử trong tập hợp này là 7.

| Các tham số đầu vào | 1 <= Phạm vi số (numRange) <= 9 1 <= Số lượng lựa chọn (selectCount) <= 9 1 <= Phần tử thứ N trong tập hợp sắp xếp theo thứ tự từ điển (findOrderedPermIdx) <= 2,147,483,647 Số lượng các hoán vị không vượt quá 400,000.

| Kiểu trả về | 0 hoặc tổng các phần tử của hoán vị tại vị trí tương ứng

| Ví dụ |

numRange	selectCount	findOrderedPermIdx	return
3	2	5	4
5	2	30	0
Ví dụ 1 : Trong tập dữ liệu [1, 2, 3], chọn ra 2 phần tử và liệt kê theo thứ tự từ điển, tập hợp thứ 5 sẽ là [3, 1] và tổng các phần tử của tập hợp này là 4.
Ví dụ 2 : Trong tập dữ liệu [1, 2, 3, 4, 5], chọn ra 2 phần tử và liệt kê theo thứ tự từ điển, tập hợp thứ 30 không tồn tại nên trả về giá trị là 0.
'''
current_ordered_perm_idx = 0
ordered_perm_idx_sum = 0


def permutation(num_list, num_range, select_list, select_count, visited, find_ordered_perm_idx, select_idx):
    global current_ordered_perm_idx, ordered_perm_idx_sum

    if select_idx == ​select_count​:
        current_ordered_perm_idx += 1

        if current_ordered_perm_idx == ​find_ordered_perm_idx​:
            for idx in range(select_count):
                ordered_perm_idx_sum += select_list[idx]

        return

    for current_idx in range(num_range):
        if visited[current_idx]:
            continue

        visited[current_idx] = ​True​
        select_list[select_idx] = ​num_list[current_idx]​
        permutation(num_list, num_range, select_list, select_count, visited, find_ordered_perm_idx, ​select_idx + 1​)
        visited[current_idx] = ​False​


def solution(num_range, select_count, find_ordered_perm_idx):
    global ordered_perm_idx_sum

    answer = 0

    ordered_perm_idx_sum = 0

    num_list = [0] * num_range
    select_list = [0] * select_count
    visited = [False] * num_range

    for idx in range(num_range):
        num_list[idx] = idx + 1

    permutation(num_list, num_range, select_list, select_count, visited, find_ordered_perm_idx, 0)

    answer = ordered_perm_idx_sum
    return answer
