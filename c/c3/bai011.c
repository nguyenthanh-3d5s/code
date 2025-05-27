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

int csnt(int n) {
    while(n) {
        int r = n % 10;
        if(r != 2 && r != 3 && r != 5 && r != 7) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int tongnt(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    if(nt(sum)) {
        return 1
    }
    return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;
    FOR(i, a, b) {
        if(csnt(i) && nt(i) && tongnt(i)) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
