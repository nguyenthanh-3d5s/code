#include <stdio.h>
#include <math.h>
#include <stdlib.h>
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
    FOR(i, 0, n) {
        int check = 1;
        FOR(j, 0, i) {
            if(a[i] == a[j]) {
                check = 0;
                break;
            }
        }
        if(check) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
