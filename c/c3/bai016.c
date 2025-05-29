#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int tn(int n) {
    int tmp = n;
    int lat = 0;
    while(n) {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    return tmp == lat;
}

int check(int n) {
    int last = n % 10;
    int rev = 0;
    n /= 10;
    while(n >= 10) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if((n * 2 == last || last * 2 == n) || tn(rev)) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if(check(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
