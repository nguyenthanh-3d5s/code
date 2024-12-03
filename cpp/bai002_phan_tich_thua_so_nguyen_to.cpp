#include <iostream>
using namespace std;

void primeFactorization(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    primeFactorization(n);
    return 0;
}
