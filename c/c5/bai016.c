#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int nt(int n) {
    FOR(i, 2, sqrt(n) + 1) {
        if(n % i == 0) {
            return 0;
        }
    }
    return n > 1;
}

int tn(int n) {
    int lat = 0, tmp = n;
    while(n) {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    return lat == tmp;
}

int cp(int n) {
    int can = sqrt(n);
    return can * can == n;
}

int tongnt(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    if(nt(sum)) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    FOR(i, 0, n) {
        if(nt(a[i])) {
            c1++;
        }
        if(tn(a[i])) {
            c2++;
        }
        if(cp(a[i])) {
            c3++;
        }
        if(tongnt(a[i])) {
            c4++;
        }
    }
    printf("%d %d %d %d\n", c1, c2, c3, c4);
    return 0;
}
