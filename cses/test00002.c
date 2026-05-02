#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;

    for(int i = 5; i <= n; i *= 5) {
        cnt += (n / i);
    }

    printf("%d", cnt);
    return 0;
}
