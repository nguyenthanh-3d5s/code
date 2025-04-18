#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    ll tong_chan = 0;

    for(int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);

        if(x % 2 == 0) {
            tong_chan += x;
        }
    }

    printf("%lld\n", tong_chan);

    return 0;
}
