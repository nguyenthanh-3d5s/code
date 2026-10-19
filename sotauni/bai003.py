'''
Tính toán hóa đơn điện
Mô tả
A đã ghi lại lượng điện tiêu thụ trong tháng này để tính toán hóa đơn điện cho tháng tới.

Bảng giá điện theo từng khoảng như sau:

Khoảng	Giá cơ bản (won/hộ)	Giá điện (won/kWh)
200kWh trở xuống	910	93
201~400kWh	1600	188
Trên 400kWh	7300	281
Để tính toán hóa đơn điện cho tháng tới, tôi đã viết cấu trúc chương trình như sau:

Cách tính hóa đơn điện

Giá cơ bản là giá của khoảng điện tiêu thụ tương ứng.
Lượng tiêu thụ dưới 200kWh được tính theo giá của khoảng đó.
Lượng tiêu thụ từ 201kWh đến 400kWh được tính theo giá của khoảng đó.
Lượng tiêu thụ trên 400kWh được tính theo giá của khoảng đó. Ví dụ: Nếu tổng lượng tiêu thụ là 250kWh: 1,600 + 20093 + 50188 = 29,600 won.
Khi lượng điện tiêu thụ trong tháng này (used) được đưa vào như một tham số, hãy viết hàm solution để trả về hóa đơn hàng tháng. Hãy điền vào chỗ trống để hoàn thành toàn bộ mã.

Giải thích tham số
Lượng điện tiêu thụ trong tháng này (used) sẽ được đưa vào như một tham số của hàm solution.
Đơn vị của used là kWh.
used là số nguyên dương từ 1 đến 1,000.
Giải thích giá trị trả về
Hãy viết hàm solution để trả về hóa đơn hàng tháng.
Ví dụ
used	return
149	14767
262	31856
Giải thích ví dụ
Ví dụ #1: 910 (giá cơ bản) + 93*149 = 910 + 13,857 = 14,767 won.

Ví dụ #2: 1600 (giá cơ bản) + 93200 (khoảng đầu tiên) + 18862 (khoảng thứ hai) = 1,600 + 18,600 + 11,656 = 31,856 won.
'''
def solution(used):
    answer = 0
    if used <= 200:
        answer += 910
        answer += used * 93
    elif used <= 400:
        answer += 1600
        answer += 200 * 93 + (used - 200) * 188
    else:
        answer += 7300
        answer += 200 * 93 + 200 * 188 + (used - 400) * 281
    return answer

def _main():
    #_data = list(map(int, input().split(", ")))
    _a0 = int(input())
    _res = solution(_a0)
    print(_res)

_main()
