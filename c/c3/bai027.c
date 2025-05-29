#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int check(int n) {
    if(n == 1) {
        return 1;
    }
    int f1 = 1;
    int f2 = 1;
    FOR(i, 2, 10) {
        int fn = f1 + f2;
        if(fn == n) {
            return 1;
        }
        f2 = f1;
        f1 = fn;
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
