#include <iostream>
using namespace std;

using ll = long long;

int gcd(int, int);
int lcm(int, int);

int main() {

    return 0;
}

int gcd(int a, int b) {
    while(b) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
