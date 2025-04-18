#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    ll gt = 1;
    double res = 0;

    for(int i = 1; i <= n; i++) {
        res += 1.0 / gt;
        gt *= i;
    }

    printf("%.4lf\n", res);

    return 0;
}
