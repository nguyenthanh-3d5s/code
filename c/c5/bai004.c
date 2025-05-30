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
    int x;
    scanf("%d", &x);
    int lon = 0, nho = 0;
    FOR(i, 0, n) {
        if(a[i] > x) {
            lon++;
        }
        else if(a[i] < x) {
            nho++;
        }
    }
    printf("%d %d\n", nho, lon);
    return 0;
}
