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

int check(int n) {
    int r = n % 10;

    while(n) {
        if(n % 10 > r) {
            return 0;
        }

        n /= 10;
    }

    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int dem = 0;

    for(int i = 1; i <= n; i++) {
        if(check(i) && nt(i)) {
            printf("%d ", i);
            dem++;
        }
    }

    printf("\n%d\n", dem);

    return 0;
}
