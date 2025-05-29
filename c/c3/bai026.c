#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

void fibo(int n) {
    if(n == 1) {
        printf("1");
    }
    else if(n == 2) {
        printf("1 1");
    }
    else {
        printf("1 1 ");
        int f1 = 1;
        int f2 = 1;
        FOR(i, 3, n) {
            int fn = f1 + f2;
            printf("%d ", fn);
            f2 = f1;
            f1 = fn;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    fibo(n);
    return 0;
}
