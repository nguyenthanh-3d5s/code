#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    ll n;
    scanf("%lld", &n);

    if(n == 0) {
        printf("1\n");
        return 0;
    }

    int cnt = 0;

    while(n != 0) {
        cnt++;
        n /= 10;
    }

    printf("%d\n", cnt);

    return 0;
}
