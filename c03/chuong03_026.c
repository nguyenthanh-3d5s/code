#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

void in_fb(int n) {
    if(n == 1) {
        printf("1");
    }
    elif(n == 2) {
        printf("1 1");
    }
    else {
        printf("1 1 ");

        ll f1 = 1;
        ll f2 = 1;

        FOR(i, 3, n) {
            ll fn = f1 + f2;
            printf("%lld ", fn);
            f2 = f1;
            f1 = fn;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    in_fb(n);

    return 0;
}
