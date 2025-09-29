/*
# đề bài:
bạn được cho 1 chuỗi DNA bao gồm: A, C, G, T
nhiệm vụ tìm nu lặp lại dài nhất
và in ra số lượng

# biết:
1 <= n <= 10^6

# ví dụ:
input:
ATTCGGGA
output:
3
*/

#include <bits/stdc++.h>
using namespace std;

#define sz(a) (int) (a).size()

typedef long long ll;

int main() {
    string chr; cin >> chr;
    int max = 1;
    int cnt = 1;

    for(int i = 0; i < sz(chr) - 1; i++) {
        if(chr[i] == chr[i + 1]) {
            cnt++;
            if(max < cnt) {
                max = cnt;
            }
        }
        else {
            cnt = 1;
        }
    }

    cout << max;

    return 0;
}
