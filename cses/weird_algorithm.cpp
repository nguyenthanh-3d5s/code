/* 
# Đề bài:
Xét một thuật toán lấy đầu vào là một số nguyên dương n
Nếu n chẵn, thuật toán chia n cho hai
nếu n lẻ, thuật toán nhân n với ba rồi cộng thêm một
Thuật toán lặp lại quá trình này cho đến khi n bằng một
Ví dụ, chuỗi n = 3 như sau:
3 > 10 > 5 > 16 > 8 > 4 > 2 > 1
Nhiệm vụ của bạn là mô phỏng việc thực hiện thuật toán cho một giá trị n nhất định

# Biết: 
1 <= n <= 10^6

# Ví dụ:
input: 
3
output: 
3 10 5 16 8 4 2 1
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n; cin >> n;

    cout << n << " ";

    while(n != 1) {
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }

        cout << n << " ";
    }

    return 0;
}
