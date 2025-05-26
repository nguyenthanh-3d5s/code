#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    int tong = 0;
    FOR(i, 1, n) {
        if(i % 2 == 0) {
            tong += i;
        }
        else {
            tong -= i;
        }
    }
    printf("%d\n", tong);
    return 0;
}
