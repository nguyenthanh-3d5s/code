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

int hh(int n) {
    FOR(i, 2, 32) {
        if(nt(i)) {
            int tmp = (int) pow(2, i) - 1;
            if(nt(tmp)) {
                int num = (int) pow(2, i - 1) * tmp;
                if(num == n) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if(hh(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
