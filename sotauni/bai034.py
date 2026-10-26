'''
Lập kế hoạch tham gia sự kiện
Vấn đề mô tả
Bạn được giao nhiệm vụ lập kế hoạch hàng năm cho gia đình, cố gắng tham gia càng nhiều sự kiện địa phương trong 365 ngày càng tốt.

Số lượng sự kiện địa phương N được cho với ngày bắt đầu và ngày kết thúc. Ngày được cung cấp là số nguyên từ 1 đến 365, và ngày kết thúc phải lớn hơn hoặc bằng ngày bắt đầu.

Khi tham gia một sự kiện địa phương, bạn phải tham gia từ ngày bắt đầu đến ngày kết thúc, và không thể tham gia vào các sự kiện khác cùng một lúc. Bạn có thể tham gia vào sự kiện khác từ ngày hôm sau sau khi sự kiện hiện tại kết thúc.

Ví dụ, ngày bắt đầu và ngày kết thúc của 5 lễ hội có thể được cung cấp như bảng dưới đây.

Lễ hội	Ngày bắt đầu	Ngày kết thúc
1	1	4
2	5	9
3	5	7
4	8	11
5	3	8
Lễ hội 5 bắt đầu từ ngày 3 và kết thúc vào ngày 8, trong khi lễ hội 4 bắt đầu từ ngày 8. Khi tham gia một lễ hội, bạn phải đợi một ngày sau khi kết thúc để có thể tham gia lễ hội khác, vì vậy không thể tham gia lễ hội 5 và lễ hội 4 cùng một lúc.

Do đó, nếu bạn tham gia lễ hội 5 (từ ngày 3 đến ngày 8), bạn sẽ không thể tham gia bất kỳ sự kiện nào khác: lễ hội 1 (ngày 1–4), lễ hội 2 (ngày 5–9) và lễ hội 3 (ngày 5–7) đều trùng thời gian với lễ hội 5, còn lễ hội 4 lại bắt đầu ngay ngày 8 — ngày mà lễ hội 5 vẫn chưa kết thúc.

Tuy nhiên, thời gian tổ chức của lễ hội 1, lễ hội 3 và lễ hội 4 không chồng chéo, vì vậy bạn có thể tham gia tất cả, và đây là cách tối đa để tham gia sự kiện: lễ hội 1 (ngày 1–4), lễ hội 3 (ngày 5–7) và lễ hội 4 (ngày 8–11) — mỗi lễ hội bắt đầu đúng vào ngày hôm sau khi lễ hội trước kết thúc.

Khi được cho số lượng sự kiện địa phương N và mảng 2 chiều festival đại diện cho ngày bắt đầu và ngày kết thúc của các sự kiện địa phương, hãy viết hàm solution để trả về số lượng sự kiện tối đa có thể tham gia trong 365 ngày. Tuy nhiên, một số mã bị sai và không hoạt động đúng. Hãy sửa mã đã cho để nó xử lý tất cả các đầu vào một cách chính xác.

Chỉ cần sửa một dòng mã.

Mô tả tham số
N (1 ≤ N ≤ 50)
festival: mảng 2 chiều đại diện cho ngày bắt đầu và ngày kết thúc của các sự kiện địa phương
festival[i][0]: Ngày bắt đầu của sự kiện thứ (i + 1)
festival[i][1]: Ngày kết thúc của sự kiện thứ (i + 1)
1 ≤ festival[i][0] ≤ festival[i][1] ≤ 365
Mô tả giá trị trả về
Trả về số lượng sự kiện tối đa có thể tham gia trong 365 ngày.
Ví dụ
N	festival	return
5	[[1, 4], [5, 9], [5, 7], [8, 11], [3, 8]]	3
5	[[5, 5], [1, 2], [3, 5], [4, 4], [6, 11]]	4
Ví dụ 1: Như đã mô tả ở trên.
Ví dụ 2: Nếu tham gia các sự kiện có lịch trình [1, 2], [4, 4], [5, 5], [6, 11], bạn có thể tham gia tối đa 4 sự kiện.
'''
def solution(N,  festival):
    for i in range(N - 1, -1, -1):
        for j in range(i):
            if festival[j][1] > festival[j + 1][1] or festival[j][1] == festival[j + 1][1] and festival[j][0] > festival[j + 1][0]:
                tmp = festival[j]
                festival[j] = festival[j + 1]
                festival[j + 1] = tmp
    
    count = 0
    lastTime = -1
    
    for i in range(N):
        if lastTime < festival[i][0]:
            count += 1
            lastTime = festival[i][1]
            
    return count
