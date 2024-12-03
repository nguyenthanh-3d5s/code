#include <iostream>
using namespace std;

bool isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int n;
    cin >> n;
    cout << (isPerfectNumber(n) ? "YES" : "NO") << endl;
    return 0;
}
