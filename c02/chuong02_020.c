#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    if(n == 1) {
        printf("-1\n");
    }
    else {
        printf("%d\n", n / 2);

        if(n % 2 == 0) {
            for(int i = 1, _n = n / 2; i <= _n; i++) {
                printf("2 ");
            }
        }
        else {
            for(int i = 1, _n = n / 2 - 1; i <= _n; i++) {
                printf("2 ");
            }
            printf("3\n");
        }
    }

    return 0;
}
