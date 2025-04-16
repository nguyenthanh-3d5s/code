#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if(n % 2 == 0) {
        printf("%d\n",1ll * n / 2 * m);
    }
    else {
        printf("%d\n",1ll * n / 2 * m + m / 2);
    }

    return 0;
}
