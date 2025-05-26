#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    FOR(i, 1, sqrt(n)) {
        if(n % i == 0) {
            sum += i;
            sum += n / i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
