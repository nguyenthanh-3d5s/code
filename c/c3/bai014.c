#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int tn(int n) {
    int lat = 0;
    int tmp = n;
    while(n) {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    return lat == tmp;
}

int check6(int n) {
    while(n != 0) {
        int r = n % 10;
        if(r == 6) {
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int check8(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    if(sum % 10 == 8) {
        return 1;
    }
    return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    FOR(i, a, b) {
        if(tn(i) && check6(i) && check8(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
