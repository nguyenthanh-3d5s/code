#include <stdio.h>
#define ll long long
#define elif else if
#define endl printf("\n")
#define REP(i, n) for(int i = 1, _n = (n); i <= _n; i++)

int main() {
    int n;
    scanf("%d", &n);

    REP(i, n) {
        REP(j, n) {
            printf("*");
        }
        endl;
    }
    endl;

    REP(i, n) {
        REP(j, n) {
            if(i == 1 || i == n || j == 1 || j == n) {
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
        REP(j, n) {
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            }
            else {
                printf("#");
            }
        }
        endl;
    }
    endl;

    REP(i, n) {
        REP(j, n) {
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("%d ", i);
            }
            else {
                printf("  ");
            }
        }
        endl;
    }
    endl;

    return 0;
}
