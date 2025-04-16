#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);

    int ngang, doc;

    if(n % a == 0) {
        doc = n / a;
    }
    else {
        doc = n / a + 1;
    }

    if(m % a == 0) {
        ngang = m / a;
    }
    else {
        ngang = m / a + 1;
    }

    printf("%lld\n", 1ll * ngang * doc);

    return 0;
}
