#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    FOR(i, 1, sqrt(n)) {
        printf("%d ", i * i);
    }
    return 0;
}
