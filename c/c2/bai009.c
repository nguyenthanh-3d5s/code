#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    int tich = 1;
    FOR(i, 1, n) {
        if(n % i == 0) {
            tich *= i;
        }
    }
    printf("%d\n", tich);
    return 0;
}
