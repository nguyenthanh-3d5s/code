#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

int dem_uoc(int);
int tong_uoc(int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    
    cout << dem_uoc(n) << endl;
    cout << tong_uoc(n) << endl;

    return 0;
}

int dem_uoc(int n) {
    int cnt = 0;
    int m = sqrt(n);

    for(int i = 1; i <= m; i++) {
        if(n % i == 0) {
            cnt += 2;
        }
    }

    if(m * m == n) {
        cnt--;
    }

    return cnt;
}

int tong_uoc(int n) {
    int sum = 0;
    int m = sqrt(n);

    for(int i = 1; i <= m; i++) {
        if(n % i == 0) {
            sum += i + n / i;
        }
    }

    if(m * m == n) {
        sum -= m;
    }

    return sum;
}
