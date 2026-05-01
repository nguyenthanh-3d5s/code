%%writefile test.c

#include <stdio.h>
#define MOD (int) (1e9+7)

int BIN_NHAN(int, int);
int BIN_LUY_THUA(int, int);
int NGHICH_DAO_MOD(int);

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", NGHICH_DAO_MOD(a));
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

int BIN_LUY_THUA(int a, int b) {
    int res = 1;

    while(b) {
        if(b % 2 != 0) {
            res = BIN_NHAN(res, a);
            b--;
        }
        a = BIN_NHAN(a, a);
        b /= 2;
    }

    return res;
}

int NGHICH_DAO_MOD(int a) {
    return BIN_LUY_THUA(a, MOD - 2);
}
