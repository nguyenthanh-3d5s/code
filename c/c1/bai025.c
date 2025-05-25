#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int n;
    scanf("%d", &n);
    int res = 0;
    res += n / 100;
    n %= 100;
    res += n / 20;
    n %= 20;
    res += n / 10;
    n %= 10;
    res += n / 5;
    n %= 5;
    res += n;
    printf("%d\n", res);
    return 0;
}
