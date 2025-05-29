#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int check(int n) {
    FOR(i, 2, sqrt(n)) {
        if(n % i == 0) {
            int mu = 0;
            while(n % i == 0) {
                mu++;
                n /= i;
            }
            if(mu == 1) {
                return 0;
            }
        }
    }
    if(n > 1) {
        return 0;
    }
    return 1;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    FOR(i, a, b) {
        if(check(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
