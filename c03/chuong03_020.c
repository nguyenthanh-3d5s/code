#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 2, _n = (n); i <= _n; i++)

int solve(int n, int k) {
    int cnt = 0;

    REP(i, sqrt(n)) {
        if(n % i == 0) {
            while(n % i == 0) {
                n /= i;
                cnt++;

                if(cnt == k) {
                    return i;
                }
            }
        }
    }

    if(n > 1) {
        cnt++;
    }

    if(cnt == k) {
        return n;
    }

    return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d\n", solve(n, k));

    return 0;
}
