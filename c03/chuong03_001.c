#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 2, _n = (n); i <= _n; i++)

int nt(int n) {
    if(n < 2) {
        return 0;
    }

    REP(i, sqrt(n)) {
        if(n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    if(nt(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
