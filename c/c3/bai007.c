#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int cp(int n) {
    int can = sqrt(n);
    return can * can == n;
}

int main() {
    int n;
    scanf("%d", &n);
    if(cp(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
