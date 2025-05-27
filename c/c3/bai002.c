#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int nt(int n) {
    int cnt = 0;
    FOR(i, 2, sqrt(n)) {
        if(n % i == 0) {
            int mu = 0;
            while(n % i == 0) {
                mu++;
                n /= i;
            }
            if(mu >= 2) {
                return 0;
            }
            cnt++;
        }
    }
    if(n > 1) {
        cnt++;
    }
    if(cnt == 3) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if(nt(n)) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    return 0;
}
