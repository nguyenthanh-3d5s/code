#include <stdio.h>
#define ll long long
#define elif else if

int tn(ll n) {
    ll tmp = n;
    ll lat = 0;

    while(n) {
        lat = lat * 10 + n % 10;
        n /= 10;
    }

    return tmp == lat;
}

int check(ll n) {
    int last = n % 10;
    ll rev = 0;

    n /= 10;

    while(n >= 10) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if((n * 2 == last || last * 2 == n) && tn(rev)) {
        return 1;
    }

    return 0;
}

int main() {
    ll n;
    scanf("%lld", &n);
    
    if(check(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
