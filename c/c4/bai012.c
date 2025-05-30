#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

void dq(int n) {
    if(n < 16) {
        if(n <= 9) {
            printf("%d", n);
        }
        else {
            printf("%c", n + 55);
        }
    }
    else {
        dq(n / 16);
        int r = n % 16;
        if(r <= 9) {
            printf("%d", r);
        }
        else {
            printf("%c", r + 55);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    dq(n);
    return 0;
}
