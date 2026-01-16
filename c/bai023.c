// bài 23: số thuận nghịch

#include <stdio.h>
#include <math.h>
#define ll long long

int tn(ll);

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        ll n;
        scanf("%lld", &n);
        if(tn(n)) {
            printf("YES \n");
        }
        else printf("NO \n");
    }
    return 0;
}

int tn(ll n) {
    ll rev = 0, m = n;
    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if(rev == m) {
        return 1;
    }
    return 0;
}
