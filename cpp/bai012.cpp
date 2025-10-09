#include <bits/stdc++.h>
using namespace std;

bool thuan_nghich(int);

int main() {
    
    return 0;
}

bool thuan_nghich(int n) {
    int a = 0;
    int b = n;

    while(n) {
        a *= 10;
        a += n % 10;
        n /= 10;
    }

    return a == b;
}
