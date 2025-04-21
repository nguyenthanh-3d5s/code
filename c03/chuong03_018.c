#include <stdio.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 0, _n = (n); i <= _n; i++)

int check(int n) {
    REP(i, n / 111) {
        int tmp = n - 111 * i;

        if(tmp % 11 == 0) {
            return 1;
        }
    }

    return 0;
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
