// Bài 27: số hoàn hảo

#include <stdio.h>
#include <math.h>
#define ll long long

int nt(int);
int check(ll);

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        ll n;
        scanf("%lld", &n);
        if(check(n)) {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}

int nt(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return n > 1;
}

int check(ll n) {
    for(int i = 1; i <= 32; i++) {
        if(nt(i)) {
            int tmp = (int) pow(2, i) - 1;
            if(nt(tmp)) {
                ll hh = 1ll * tmp * (int) pow(2, i - 1);
                if(hh == n) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
