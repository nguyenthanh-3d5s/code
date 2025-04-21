#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 2, _n = (n); i <= _n; i++)

int check(int n) {
    REP(i, sqrt(n)) {
        if(n % i == 0) {
            int mu = 0;

            while(n % i == 0) {
                mu++;
                n /= i;
            }

            if(mu >= 2) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        if(check(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
