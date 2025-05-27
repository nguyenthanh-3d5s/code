#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int main() {
    int n;
    scanf("%d", &n);
    int tong = 0;
    FOR(i, 1, n) {
        int x;
        scanf("%d", &x);
        if(x % 2 == 0) {
            tong += x;
        }
    }
    printf("%d\n", tong);
    return 0;
}
