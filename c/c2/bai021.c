#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    FOR(i, 1, n) {
        FOR(j, 1, n) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    FOR(i, 1, n) {
        FOR(j, 1, n) {
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    FOR(i, 1, n) {
        FOR(j, 1, n) {
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            }
            else {
                printf("#");
            }
        }
        printf("\n");
    }
    printf("\n");
    FOR(i, 1, n) {
        FOR(j, 1, n) {
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("%d ", i);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
