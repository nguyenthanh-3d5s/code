#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dem_uoc(int);
int tong_uoc(int);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a; cin >> a;
    
    cout << dem_uoc(a) << endl;
    cout << tong_uoc(a) << endl;

    return 0;
}

int dem_uoc(int n) {
    int cnt = 0;

    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            cnt++;

            if(i != n / i) {
                cnt++;
            }
        }
    }

    return cnt;
}

int tong_uoc(int n) {
    int sum = 0;

    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            sum += i;

            if(i != n / i) {
                sum += n / i;
            }
        }
    }

    return sum;
}
