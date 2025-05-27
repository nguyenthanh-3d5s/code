#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int tn(int n) {
    int lat = 0;
    int tmp = n;
    while(n) {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if(tmp == lat) {
        return 1;
    }
    return 0;
}

int check(int n) {
    int cnt = 0;
    FOR(i, 2, sqrt(n)) {
        if(n % i == 0) {
            cnt++;
            while(n % i == 0) {
                n /= i;
            }
        }
    }
    if(n > 1) {
        cnt++;
    }
    if(cnt >= 3) {
        return 1;
    }
    return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ok = 0;
    FOR(i, a, b) {
        if(tn(i) && check(i)) {
            printf("%d ", i);
            ok = 1;
        }
    }
    if(ok == 0) {
        printf("-1\n");
    }
    return 0;
}
