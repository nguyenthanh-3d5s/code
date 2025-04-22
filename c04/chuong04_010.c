#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define min(a, b) (a) < (b) ? (a) : (b)
#define max(a, b) (a) > (b) ? (a) : (b)
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

void S(int n, double *res) {
    if(n == 0) {
        return;
    }

    *res += 1.0 / n;

    S(n - 1, res);
}

int main() {
    int n;
    scanf("%d", &n);

    double res = 0;

    S(n, &res);

    printf("%.3lf\n", res);

    return 0;
}
