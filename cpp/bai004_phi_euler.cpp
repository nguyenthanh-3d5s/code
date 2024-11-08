#include <iostream>
#include <cmath>
using namespace std;

using ll = long long;

int phi_euler(int);

int main() {
    int n; cin >> n;
    cout << phi_euler(n);
    return 0;
}

int phi_euler(int n) {
    int ans = n;
    int m = sqrt(n) + 1;

    for(int i = 2; i < m; i++) {
        if(n % i == 0) {
            ans = ans - ans / i;

            while(n % i == 0) {
                n /= i;
            }
        }
        m = sqrt(n) + 1;
    }

    if(n > 1) {
        ans = ans - ans / n;
    }
    return ans;
}
