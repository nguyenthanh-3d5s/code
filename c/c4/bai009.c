#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int binpow(int a, int b) {
    if(b == 0) {
        return 1;
    }
    int tmp = binpow(a, b / 2);
    if(b % 2 == 1) {
        return tmp * tmp * a;
    }
    else {
        return tmp * tmp;
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", binpow(a, b));
    return 0;
}
