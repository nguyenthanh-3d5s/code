#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    int gt = 1;
    FOR(i, 1, n) {
        gt *= i;
    }
    printf("%d\n", gt);
    return 0;
}
