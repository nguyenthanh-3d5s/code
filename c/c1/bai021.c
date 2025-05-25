#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);
    int trai, phai;
    if(k % 2 == 0) {
        trai = phai = k / 2;
    }
    else {
        trai = k / 2;
        phai = trai + 1;
    }
    printf("%d\n", phai * a - trai * b);
    return 0;
}
