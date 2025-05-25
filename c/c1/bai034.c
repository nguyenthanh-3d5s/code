#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int c1, c2, c3, c4, c5;
    scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);
    int tong = c1 + c2 + c3 + c4 + c5;
    if(tong % 5 == 0) {
        int b = tong / 5;
        if(b != 0) {
            printf("%d\n", b);
        }
        else {
            printf("-1\n");
        }
    }
    else {
        printf("-1\n");
    }
    return 0;
}
