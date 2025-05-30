#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

void in1(int n) {
    if(n < 10) {
        printf("%d", n);
    }
    else {
        printf("%d ", n % 10);
        in1(n / 10);
    }
}

void in2(int n) {
    if(n < 10) {
        printf("%d ", n);
    }
    else {
        in2(n / 10);
        printf("%d ", n % 10);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    in1(n);
    printf("\n");
    in2(n);
    return 0;
}
