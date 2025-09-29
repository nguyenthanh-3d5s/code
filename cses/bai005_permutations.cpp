/*
# đề bài:
Cho số nguyên n
n được gọi là đẹp
nếu dãy số 1 đến n
có thể sắp xếp thành 1 dãy
mà các phần tử liền kề hơn kém nhau >=2
nếu không tồn tại in ra "NO SOLUTION"

# biết:
1 <= n <= 10^6

# ví dụ:
input:
5
output:
4 2 5 3 1

input:
3
output:
NO SOLUTION
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;

    if(n < 5) {
        if(n < 2) {
            cout << 1;
        }
        else if(n < 4) {
            cout << "NO SOLUTION";
        }
        else {
            cout << "2 4 1 3";
        }
        return 0;
    }

    for(int i = n - n % 2; i > 1; i -= 2) {
        cout << i << " ";
    }

    int tmp = (n % 2 == 0) ? n - 1 : n;

    for(int i = tmp; i > 0; i -= 2) {
        cout << i << " ";
    }

    return 0;
}
