#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

void dq(int n) {
    if(n == 0) {
        return;
    }
    else {
        dq(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    dq(n);
    return 0;
}
