#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    double tong = 0;

    for(int i = 1; i <= n; i++) {
        tong += 1.0 / (2 * i);
    }

    printf("%.5lf\n", tong);

    return 0;
}
