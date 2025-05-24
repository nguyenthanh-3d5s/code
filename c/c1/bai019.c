#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    if(n % 2 == 0) {
        printf("%d\n", n / 2 * m);
    }
    else {
        printf("%d\n", n / 2 * m + m / 2);
    }
    return 0;
}
