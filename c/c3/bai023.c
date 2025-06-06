#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int nt(int n) {
    if(n < 2) {
        return 0;
    }
    FOR(i, 2, sqrt(n)) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        FOR(i, 1, n / 2) {
            if(nt(i) && nt(n - i)) {
                printf("%d %d\n", i, n - i);
            }
        }
    }
    return 0;
}
