#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

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

int main() {
    int x, y, z, n;
    scanf("%d %d %d %d", &x, &y, &z, &n);
    int bc = lcm(x, lcm(y, z));
    int tmp = (int) pow(10, n - 1);
    int kq = (tmp + bc - 1) / bc * bc;
    if(kq < pow(10, n)) {
        printf("%d\n", kq);
    }
    else {
        printf("-1\n");
    }
    return 0;
}
