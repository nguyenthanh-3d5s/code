#include <stdio.h>
#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1)
#define GRAY(i) ((i) ^ ((i) >> 1))

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < MASK(n); i++) {
        for(int j = n - 1; j >= 0; j--) {
            printf("%d", BIT(GRAY(i), j));
        }
        printf("\n");
    }

    return 0;
}
