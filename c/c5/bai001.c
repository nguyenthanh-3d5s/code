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
    int chan = 0, le = 0;
    int tchan = 0, tle = 0;
    FOR(i, 0, n) {
        if(a[i] % 2 == 0) {
            chan++;
            tchan += a[i];
        }
        else {
            le++;
            tle += a[i];
        }
    }
    printf("%d %d %d %d\n", chan, le, tchan, tle);
    return 0;
}
