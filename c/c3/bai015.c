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

int check(int n) {
    int r = n % 10;
    while(n) {
        if(n % 10 > r) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int dem = 0;
    FOR(i, 1, n) {
        if(check(i) && nt(i)) {
            printf("%d ", i);
            dem++;
        }
    }
    printf("\n%d\n", dem);
    return 0;
}
