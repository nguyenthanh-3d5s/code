#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int check(int n) {
    if(n % 2 == 0) {
        return 1;
    }
    else {
        if(n % 10 % 2 == 1) {
            return 0;
        }
        else {
            return check(n / 10);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if(check(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
