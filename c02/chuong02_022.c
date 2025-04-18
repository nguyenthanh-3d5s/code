#include <stdio.h>
#define ll long long
#define elif else if
#define endl printf("\n")
#define REP(i, n) for(int i = 1, _n = (n); i <= _n; i++)
#define REPr(i, n) for(int i = (n); i >= 1; i--)

int main() {
    int n;
    scanf("%d", &n);

    REP(i, n) {
        REP(j, i) {
            printf("*");
        }
        endl;
    }
    endl;

    REPr(i, n) {
        REP(j, i) {
            printf("*");
        }
        endl;
    }
    endl;

    REP(i, n) {
        REP(j, n) {
            if(j <= n - i) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        endl;
    }
    endl;

    REP(i, n) {
        REP(j, n) {
            if(j >= i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        endl;
    }
    endl;

    REP(i, n) {
        REP(j, i) {
            if(i == 1 || i == n || j == 1 || j == i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        endl;
    }
    endl;

    return 0;
}
