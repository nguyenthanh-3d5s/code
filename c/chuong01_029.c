#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int cb;

    if(b % a == 0) {
        cb = b / a;
        if(b * cb == c && c * cb == d) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    else {
        printf("NO\n");
    }

    return 0;
}
