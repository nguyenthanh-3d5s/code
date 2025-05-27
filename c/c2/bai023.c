#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int main() {
    int n;
    scanf("%d", &n);
    int dem = 1;
    FOR(i, 1, n) {
        FOR(j, 1, n) {
            printf("%d ", dem);
            dem++;
        }
        printf("\n");
    }
    printf("\n");
    FOR(i, 1, n) {
        int kt = i;
        FOR(j, 1, n) {
            printf("%d ", kt);
            kt++;
        }
        printf("\n");
    }
    printf("\n");
    FOR(i, 1, n) {
        FOR(j, 1, n) {
            if(j <= n - i) {
                printf("~");
            }
            else {
                printf("%d", i);
            }
        }
        printf("\n");
    }
    printf("\n");
    FOR(i, 1, n) {
        int kt = i;
        int kc = n - 1;
        FOR(j, 1, i) {
            printf("%d ", kt);
            kt += kc;
            kc--;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
