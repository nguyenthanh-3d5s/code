#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

bool thuan_nghich(int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << thuan_nghich(101);

    return 0;
}

bool thuan_nghich(int n) {
    int num = 0;
    int m = n;

    while(n) {
        int tmp = n % 10;
        num = num * 10 + tmp;
        n /= 10;
    }

    return num == m;
}
