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

int find(int n) {
    for(int i = n; i >= 2; i--) {
        if(n % i == 0 && nt(i)) {
            return i;
        }
    }

    return 0;
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
