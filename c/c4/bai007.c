#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int tohop(int n, int k) {
    if(k == 0 || n == k) {
        return 1;
    }
    else {
        return tohop(n - 1, k - 1) + tohop(n - 1, k);
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", tohop(n, k));
    return 0;
}
