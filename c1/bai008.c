#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int tong = a + b;
    int hieu = a - b;
    ll tich = 1ll * a * b;
    printf("%d %d %lld ", tong, hieu, tich);
    if(b == 0) {
        printf("INVALID\n");
    }
    else {
        double thuong = 1.0 * a / b;
        printf("%.4f\n", thuong);
    }
    return 0;
}
