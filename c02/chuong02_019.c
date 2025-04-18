#include <stdio.h>
#define ll long long
#define elif else if

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
