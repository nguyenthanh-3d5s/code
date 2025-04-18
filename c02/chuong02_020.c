#include <stdio.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 1, _n = (n); i <= _n; i++)

int main() {
    int n;
    scanf("%d", &n);

    if(n == 1) {
        printf("-1\n");
    }
    else {
        printf("%d\n", n / 2);

        if(n % 2 == 0) {
            REP(i, n / 2) {
                printf("2 ");
            }
        }
        else {
            REP(i, n / 2 - 1) {
                printf("2 ");
            }
            printf("3\n");
        }
    }

    return 0;
}
