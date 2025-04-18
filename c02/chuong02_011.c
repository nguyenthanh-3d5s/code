#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    int tong = 0;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            tong += i;
        }
        else {
            tong -= i;
        }
    }

    printf("%d\n", tong);

    return 0;
}
