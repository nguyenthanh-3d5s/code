#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int solve(int n, int k) {
    int cnt = 0;
    FOR(i, 2, sqrt(n)) {
        if(n % i == 0) {
            while(n % i == 0) {
                n /= i;
                cnt++;
                if(cnt == k) {
                    return i;
                }
            }
        }
    }
    if(n > 1) {
        cnt++;
    }
    if(cnt == k) {
        return n;
    }
    return -1;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", solve(n, k));
    return 0;
}
