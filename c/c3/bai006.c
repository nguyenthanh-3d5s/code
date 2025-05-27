#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int tonguoc(int n) {
    int sum = 0;
    FOR(i, 1, sqrt(n)) {
        if(n % i == 0) {
            sum += i;
            if(i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", tonguoc(n));
    return 0;
}
