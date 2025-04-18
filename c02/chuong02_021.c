#include <stdio.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 0, _n = (n); i < _n; i++)

int main() {
    int n;
    scanf("%d", &n);

    REP(i, n) {
        REP(j, n) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
