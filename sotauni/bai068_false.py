'''
Trò chơi ném dây thừng
Trò chơi ném dây thừng
Người chơi ném sợi dây có độ dài là 4 vào bàn game (mảng 2 chiều). Điểm số cuối cùng được quyết định bởi tổng của 4 ô mà sợi dây nằm trên đó.

Quy tắc:

Sợi dây chiếm 4 ô liền kề theo chiều dọc hoặc chiều ngang.
Các trường hợp sợi dây cuộn lại, chiếm ô không liền kề, hoặc nằm ngoài bàn game đều không hợp lệ.
Ví dụ bàn game

Các cách ném hợp lệ:
Cách ném hợp lệ

Các cách ném không hợp lệ:
Cách ném không hợp lệ

Điểm tối đa trong ví dụ dưới đây là 19 điểm:
Điểm tối đa

Hãy hoàn thiện hàm solution để trả về điểm số cao nhất có thể đạt được.

Giới hạn
2 <= Độ dài chiều ngang của MAP <= 10
2 <= Độ dài chiều dọc của MAP <= 10
0 <= Điểm số của mỗi ô trên bàn game <= 100
Ví dụ
MAP	return
[[1, 2, 3, 4, 5], [5, 4, 3, 2, 1], [2, 3, 4, 5, 6], [6, 5, 4, 3, 2], [1, 2, 1, 2, 1]]	19

'''
