#include <iostream>
using namespace std;

using ll = long long;

int giai_thua(int, int);

int main() {
    int k, n;
    cin >> k >> n;

    int tu = giai_thua(min(k, n - k), n);
    int mau = giai_thua(1, n);

    cout << tu / mau;

    return 0;
}

int giai_thua(int a, int b) {
    int res = 1;

    for(int i = a + 1; i <= b; i++) {
        res *= i;
    }

    return res;
}
