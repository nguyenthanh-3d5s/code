#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 2, _n = (n); i <= _n; i++)

int find(int n) {
    int res = 0;

    REP(i, sqrt(n)) {
        if(n % i == 0) {
            res = i;

            while(n % i == 0) {
                n /= i;
            }
        }
    }

    if(n > 1) {
        res = n;
    }

    return res;
}

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        printf("%d\n", find(n));
    }
    
    return 0;
}
