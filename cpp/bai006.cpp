#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    float a = 1.0 / 3;
    float b = 0.3333333;

    if(abs(a - b) < 1e-7) cout << "yes";
    else cout << "no";

    return 0;
}
