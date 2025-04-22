#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define min(a, b) (a) < (b) ? (a) : (b)
#define max(a, b) (a) > (b) ? (a) : (b)
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

const int mod = 1e9 + 7;

void luy_thua(int a, int b, int *res) {
    if(b == 0) {
        return;
    }

    if(b % 2 != 0) {
        *res = (*res * a) % mod;
    }

    luy_thua((a * a) % mod, b / 2, res);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int res = 1;

    luy_thua(a % mod, b, &res);

    printf("%d\n", res);

    return 0;
}
