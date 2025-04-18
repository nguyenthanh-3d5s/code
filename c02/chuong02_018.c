#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    ll n;
    scanf("%lld", &n);

    int cnt = 0;

    while(n != 0) {
        int r = n % 10;

        if(r == 2 || r == 3 || r == 5 || r == 7) {
            cnt++;
        }

        n /= 10;
    }

    printf("%d\n", cnt);

    return 0;
}
