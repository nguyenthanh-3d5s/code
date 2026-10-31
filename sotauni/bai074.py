'''
Đếm số lượng nhóm anagram
| Mô tả câu hỏi Dưới đây là bài toán yêu cầu chỉnh sửa code cơ bản sao cho thỏa mãn yêu cầu.

image 1

Anagram là việc sắp xếp lại các ký tự trong một chuỗi đã cho để tạo thành một từ khác hoặc một câu khác. Nghĩa là khi hai chuỗi ký tự có quan hệ Anagram với nhau thì hai chuỗi này được tạo nên bởi một tập hợp các ký tự giống nhau, chỉ khác nhau về mặt thứ tự.

Ví dụ, từ "listen" và "silent" có quan hệ Anagram.

Biến số	Ý nghĩa	Giá trị
words	Mảng chuỗi ký tự	["eat", "tea", "tan", "ate", "nat", "bat"]
n	Độ dài của mảng (words)	6
Cần triển khai hàm tính toán và trả về số lượng các tập anagram nhóm các chuỗi nằm trong mảng chuỗi ký tự thành một group.

Sắp xếp từng từ trong chuỗi ký tự đã cho theo thứ tự bảng chữ cái. (việc này giúp các từ anagram được sắp xếp theo cùng một thứ tự.)
So sánh các từ đã được sắp xếp để tìm ra anagram group.
Đếm số lượng các anagram group đã tìm được và ghi nhớ group.
Khi kết thúc vòng lặp thì trả về số lượng các anagram group.
Cần chỉnh sửa một dòng duy nhất trong code.

| Các tham số đầu vào

1 <= Độ dài của từng chuỗi ký tự (từ) <= 20
0 <= n (độ dài của words) <= 100
| Kiểu trả về

Giá trị trả về là số lượng anagram group.
Khi đó group có độ dài mang giá trị là 1 cũng được xem là một group. Nghĩa là sẽ group hóa các chuỗi ký tự anagram với nhau trong mảng chuỗi ký tự đã cho rồi trả về số lượng group.
| Ví dụ

words	n	return
["eat", "tea", "tan", "ate", "nat", "bat"]	6	3
["cat", "dog", "tac", "god", "act"]	5	2
["listen", "silent", "itensl", "tinsel", "banana"]	5	2
Ví dụ 1 : Trả về tổng 3 group "aet", "ant", "abt".
Ví dụ 2 : Trả về tổng 2 group "act", "dgo".
Ví dụ 3 : Trả về tổng 2 group "aaabnn", "eilnst".
'''
def bubble_sort(word):
    n = len(word)
    word_list = list(word)

    for i in range(n):
        for j in range(0, n - i - 1):
            if word_list[j] > word_list[j + 1]:
                word_list[j], word_list[j + 1] = word_list[j + 1], word_list[j]

    return "".join(word_list)


def solution(words, n):
    grp_cnt = 0
    grp_lst = []

    for i in range(n):
        sorted_word = bubble_sort(words[i])

        grp_exist = False
        for idx in range(grp_cnt):
            if sorted_word == grp_lst[idx]:
                grp_exist = True
                break

        if not grp_exist:
            grp_lst.append(sorted_word)
            grp_cnt += 1

    return grp_cnt
