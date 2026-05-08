#include <stdio.h>
#define MASK(i) (1 << (i))
#define GRAY(i) ((i) ^ ((i) >> 1))
#define m 16

int DISK(int);

int main() {
    int n;
    scanf("%d", &n);

    int arr[m] = {0};

    printf("%d\n", MASK(n) - 1);

    for(int i = 1; i < MASK(n); i++) {
        printf("%d ", arr[DISK(i)] + 1);

        if((n + DISK(i)) % 2 == 0) {
            arr[DISK(i)] = (arr[DISK(i)] + 1) % 3;
        }
        else {
            arr[DISK(i)] = (arr[DISK(i)] + 2) % 3;
        }

        printf("%d\n", arr[DISK(i)] + 1);
    }

    return 0;
}

int DISK(int i) {
    int n = GRAY(i) ^ GRAY(i - 1);
    int cnt = -1;

    while(n) {
        cnt++;
        n >>= 1;
    }

    return cnt;
}
