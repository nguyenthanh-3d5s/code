#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    FOR(i, 0, n / a) {
        int r = n - a * i;
        if(r % b == 0) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
