#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

void in1(int a[], int n) {
    if(n != 0) {
        printf("%d ", a[n - 1]);
        in1(a, n - 1);
    }
}

void in2(int a[], int n) {
    if(n != 0) {
        in2(a, n - 1);
        printf("%d ", a[n - 1]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    in2(a, n);
    printf("\n");
    in1(a, n);
    return 0;
}
