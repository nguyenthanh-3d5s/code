#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("-1\n");
    }
    else {
        printf("%d\n", n / 2);
        if(n % 2 == 0) {
            FOR(i, 1, n / 2) {
                printf("2 ");
            }
            printf("\n");
        }
        else {
            FOR(i, 1, n / 2 - 1) {
                printf("2 ");
            }
            printf("3\n");
        }
    }
    return 0;
}
