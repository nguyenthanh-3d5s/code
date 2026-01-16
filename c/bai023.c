// bài 23: số chính phương

#include <stdio.h>
#include <math.h>
#define ll long long

int cp(ll);

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        ll n;
        scanf("%lld", &n);
        if(cp(n)) {
            printf("YES \n");
        }
        else printf("NO \n");
    }
    return 0;
}

int cp(ll n) {
    int can = sqrt(n);
    return 1ll * can * can == n;
}
