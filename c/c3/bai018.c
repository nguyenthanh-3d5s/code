#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int check(int n) {
    FOR(i, 0, n / 111) {
        int tmp = n - 111 * i;
        if(tmp % 11 == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if(check(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
