#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

void S(int n, int *k) {
    if(n == 0) {
        return;
    }

    if(n % 2 == 0) {
        *k += n;
    }
    else {
        *k -= n;
    }

    S(n - 1, k);
}

int main() {
    int n;
    scanf("%d", &n);

    int k = 0;

    S(n, &k);

    printf("%d\n", k);

    return 0;
}
