#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    int check = 0;
    FOR(i, 0, n) {
        if(i % 2 == 0 && a[i] % 2 == 0) {
            printf("%d ", a[i]);
            check = 1;
        }
    }
    if(check == 0) {
        printf("NO\n");
    }
    return 0;
}
