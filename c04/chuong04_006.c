#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

void fb(int n, int *k) {
    if(n == 1) {
        return;
    }

    if(n == 2) {
        *k += 1;
        return;
    }

    fb(n - 1, k);
    fb(n - 2, k);
}

int main() {
    int n;
    scanf("%d", &n);

    int k = 0;

    fb(n, &k);

    printf("%d\n", k);

    return 0;
}
