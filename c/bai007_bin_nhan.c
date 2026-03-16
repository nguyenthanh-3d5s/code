#include <stdio.h>
#define MOD (int) (1e9+7)

int BIN_NHAN(int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", BIN_NHAN(a, b));
    return 0;
}

int BIN_NHAN(int a, int b) {
    int res = 0;

    while(b) {
        if(b % 2 != 0) {
            res = (res + a) % MOD;
            b--;
        }
        a = (a * 2) % MOD;
        b /= 2;
    }

    return res;
}
