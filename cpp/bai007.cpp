#include <bits/stdc++.h>
using namespace std;

int gcd(int, int);
int lcm(int, int);

int main() {

    return 0;
}

int gcd(int a, int b) {
    while(b) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
