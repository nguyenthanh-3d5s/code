#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    int dem = 0;
    FOR(i, 1, sqrt(n)) {
        if(n % i == 0) {
            dem++;
            if(i != n / i) {
                dem++;
            }
        }
    }
    printf("%d\n", dem);
    FOR(i, 1, n) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
