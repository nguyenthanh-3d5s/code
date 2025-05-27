#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int loc(int n) {
    while(n) {
        int r = n % 10;
        if(r != 0 && r != 6 && r != 8) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", loc(n));
    return 0;
}
