#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int find(int n) {
    int res = 0;
    FOR(i, 2, sqrt(n)) {
        if(n % i == 0) {
            res = i;
            while(n % i == 0) {
                n /= i;
            }
        }
    }
    if(n > 1) {
        res = n;
    }
    return res;
}

int main() {
    int t;
    scanf("%d", &t);
    FOR(i, 1, t) {
        int n;
        scanf("%d", &n);
        printf("%d\n", find(n));
    }
    return 0;
}
