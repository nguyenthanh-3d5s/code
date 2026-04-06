/*
Thời gian giới hạn: 1,00 giây
Bộ nhớ giới hạn: 512 MB

Hãy xem xét một thuật toán nhận đầu vào là một số nguyên dương n
Nếu n chẵn, thuật toán chia nó cho hai
còn nếu n lẻ, thuật toán nhân nó với ba rồi cộng thêm một
Thuật toán lặp lại bước này cho đến khi n bằng một
Ví dụ, dãy số với n = 3 như sau:
3 → 10 → 5 → 16 → 8 → 4 → 2 → 1
Nhiệm vụ của bạn là mô phỏng quá trình thực thi của thuật toán với một giá trị n cho trước

Đầu vào:
Dòng nhập duy nhất chứa một số nguyên n

Đầu ra:
In ra một dòng chứa tất cả các giá trị của n trong suốt quá trình thực hiện thuật toán

Ràng buộc:
1 ≤ n ≤ 10^6

# Ví dụ

Đầu vào:
3

Đầu ra:
3 10 5 16 8 4 2 1
*/

#include <stdio.h>
#define ll long long

int main() {
    ll n;
    scanf("%lld", &n);
    
    while(n != 1) {
        printf("%lld ", n);
        
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }
    }
    
    printf("%lld", n);
    return 0;
}
