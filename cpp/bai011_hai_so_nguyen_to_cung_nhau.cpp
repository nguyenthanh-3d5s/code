#include <iostream>
using namespace std;

bool areCoprime(int a, int b) {
    return gcd(a, b) == 1;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << (areCoprime(a, b) ? "YES" : "NO") << endl;
    return 0;
}
