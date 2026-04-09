/*
Thời gian: 1.00 giây
Giới hạn bộ nhớ: 512 MB

Bạn được cho một mảng gồm n số nguyên
Bạn muốn sửa mảng để nó trở thành mảng tăng dần
nghĩa là mỗi phần tử đều lớn hơn hoặc bằng phần tử đứng trước nó
Trong mỗi bước, bạn có thể tăng giá trị của bất kỳ phần tử nào lên một đơn vị
Số bước ít nhất cần thực hiện là bao nhiêu?

Đầu vào:
Dòng đầu tiên chứa số nguyên n: kích thước của mảng
Dòng thứ hai chứa n số nguyên x1, x2, …, xn: nội dung của mảng

Đầu ra:
In ra số bước ít nhất cần thực hiện

Ràng buộc:
1 ≤ n ≤ 2 * 10^5
1 ≤ xi ≤ 10^9

# Ví dụ

Đầu vào:
5
3 2 5 1 7

Đầu ra:
5
*/

#include <stdio.h>
#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    scanf("%d", &arr[0]);

    ll cnt = 0;

    for(int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] < arr[i - 1]) {
            cnt += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }

    printf("%lld", cnt);
    return 0;
}
