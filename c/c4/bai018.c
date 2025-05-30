#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int chan(int n) {
    if(n < 10) {
        if(n % 2 == 0) {
            return n;
        }
        else {
            return 0;
        }
    }
    else {
        if(n % 10 % 2 == 0) {
            return n % 10 + chan(n / 10);
        }
        else {
            return chan(n / 10);
        }
    }
}

int le(int n) {
    if(n < 10) {
        if(n % 2 == 0) {
            return 0;
        }
        else {
            return n;
        }
    }
    else {
        if(n % 10 % 2 == 1) {
            return n % 10 + le(n / 10);
        }
        else {
            return le(n / 10);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d %d\n", chan(n), le(n));
    return 0;
}
