#include <bits/stdc++.h>
using namespace std;

int to_hop(int, int);
int giai_thua(int, int);

int main() {
    
    return 0;
}

int to_hop(int k, int n) {
    int a = giai_thua(max(k, n - k), n);
    int b = giai_thua(1, min(k, n - k));
    return a / b;
}

int giai_thua(int l, int r) {
    int res = 1;

    for(int i = l + 1; i <= r; i++) {
        res *= i;
    }
    return res;
}
