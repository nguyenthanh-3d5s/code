#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 2, _n = (n); i <= _n; i++)

int tn(int n) {
    int lat = 0;
    int tmp = n;

    while(n) {
        lat = lat * 10 + n % 10;
        n /= 10;
    }

    if(tmp == lat) {
        return 1;
    }

    return 0;
}

int check(int n) {
    int cnt = 0;

    REP(i, sqrt(n)) {
        if(n % i == 0) {
            cnt++;

            while(n % i == 0) {
                n /= i;
            }
        }
    }

    if(n > 1) {
        cnt++;
    }

    if(cnt >= 3) {
        return 1;
    }

    return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int ok = 0;

    for(int i = a; i <= b; i++) {
        if(tn(i) && check(i)) {
            printf("%d ", i);
            ok = 1;
        }
    }

    if(ok == 0) {
        printf("-1");
    }

    return 0;
}
