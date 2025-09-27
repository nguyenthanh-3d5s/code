/*
# đề bài:
bạn được cung cấp tất cả các số từ 1 đến n
ngoại trừ 1.
nhiệm vụ của bạn là tìm số còn thiếu

# biết:
2 <= n <= 10^5

# ví dụ:
input:
5
2 3 1 5
output:
4
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n; cin >> n;
    ll sum_1 = n * (n + 1) / 2;
    ll sum_2 = 0;
    n--;

    while(n--) {
        int x; cin >> x;
        sum_2 += x;
    }

    cout << sum_1 - sum_2;

    return 0;
}
