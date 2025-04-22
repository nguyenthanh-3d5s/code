#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define min(a, b) (a) < (b) ? (a) : (b)
#define max(a, b) (a) > (b) ? (a) : (b)
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

void gt(int n, int k, int *res) {
    if(n == k) {
        return;
    }

    *res *= n;

    gt(n - 1, k, res);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    k = min(k, n - k);

    int r1 = 1;
    int r2 = 1;

    gt(n, n - k, &r1);
    gt(k, 1, &r2);

    int th = r1 / r2;

    printf("%d\n", th);

    return 0;
}
