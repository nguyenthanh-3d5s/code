#include <stdio.h>
#include <math.h>
#define ll long long

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int d1, d2, d3;
    scanf("%d %d %d", &d1, &d2, &d3);
    int kc1 = d1 + d2 + d3;
    int kc2 = 2 * (d1 + d2);
    int kc3 = 2 * (d2 + d3);
    int kc4 = 2 * (d1 + d3);
    int res = min(min(kc1, kc2), min(kc3, kc4));
    printf("%d\n", res);
    return 0;
}
