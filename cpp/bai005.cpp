#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //(a + b) mod m = (a mod m + b mod m) mod m
    //(a − b) mod m = (a mod m − b mod m) mod m
    //(a * b) mod m = (a mod m * b mod m) mod m

    int a, b, c = 1;
    cin >> a >> b;

    while(b) {
        if(b % 2 != 0) {
            c *= a;
        }

        b /= 2;
        a *= a;
    }

    cout << c << "\n";

    return 0;
}
