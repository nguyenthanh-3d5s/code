#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int n;
    scanf("%d", &n);
    int nam = n / 365;
    n %= 365;
    int tuan = n / 7;
    n %= 7;
    printf("%d %d %d\n", nam, tuan, n);
    return 0;
}
