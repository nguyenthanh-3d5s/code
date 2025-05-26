#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    int kq = n / 28;
    int vo = kq;
    while(vo >= 3) {
        int bia = vo / 3;
        kq += bia;
        vo = vo % 3 + bia;
    }
    printf("%d\n", kq);
    return 0;
}
