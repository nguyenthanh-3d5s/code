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
    int a, b;
    scanf("%d %d", &a, &b);
    FOR(i, a, b - 1) {
        FOR(j, i + 1, b) {
            if(gcd(i, j) == 1) {
                printf("(%d %d)\n", i, j);
            }
        }
    }
    return 0;
}
