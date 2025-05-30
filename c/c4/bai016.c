#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int min(int n) {
    if(n < 10) {
        return n;
    }
    else {
        int tmp = min(n / 10);
        if(n % 10 < tmp) {
            return n % 10;
        }
        else {
            return tmp;
        }
    }
}

int MAX(int a, int b) {
    return (a > b) ? a : b;
}

int max(int n) {
    if(n < 10) {
        return n;
    }
    else {
        return MAX(n % 10, max(n / 10));
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d %d\n", max(n), min(n));
    return 0;
}
