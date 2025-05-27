#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

void pt(int n) {
    FOR(i, 2, sqrt(n)) {
        if(n % i == 0) {
            int mu = 0;
            while(n % i == 0) {
                mu++;
                n /= i;
            }
            printf("%d^%d", i, mu);
            if(n != 1) {
                printf(" * ");
            }
        }
    }
    if(n > 1) {
        printf("%d^1", n);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    pt(n);
    return 0;
}
