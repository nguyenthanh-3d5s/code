#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int main() {
    int n = 0, tmp;
    int a[10000];
    while(scanf("%d", &tmp) != -1) {
        a[n] = tmp;
        n++;
    }
    int chan = 0;
    FOR(i, 0, n) {
        if(a[i] % 2 == 0) {
            chan++;
        }
    }
    if(chan > n - chan) {
        printf("chan\n");
    }
    else if(chan < n - chan) {
        printf("le\n");
    }
    else {
        printf("chanle\n");
    }
    return 0;
}
