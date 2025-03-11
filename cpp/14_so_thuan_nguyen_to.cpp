#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int k = 1e7;

bool nguyen_to(int);
bool num_nguyen_to(int);
bool sum_nguyen_to(int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;

    for(int i = 0; i < k; i++) {
        if(num_nguyen_to(i) && nguyen_to(i) && sum_nguyen_to(i)) {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

bool nguyen_to(int n) {
    if(n < 2) {
        return false;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

bool num_nguyen_to(int n) {
    if(n < 2) {
        return false;
    }

    while(n) {
        int tmp = n % 10;
        if(tmp == 2 || tmp == 3 || tmp == 5 || tmp == 7) {
            n /= 10;
        }
        else return false;
    }

    return true;
}

bool sum_nguyen_to(int n) {
    int sum = 0;

    while(n) {
        sum += n % 10;
        n /= 10;
    }

    return nguyen_to(sum);
}
