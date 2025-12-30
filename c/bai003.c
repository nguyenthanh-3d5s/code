#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define max(a, b) (a) > (b) ? (a) : (b)

void sang_ng_to_doan(bool[], int, int);
void out_put(bool[], int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    bool *arr = (bool*) calloc(b - a + 1, sizeof(bool));
    sang_ng_to_doan(arr, a, b);
    out_put(arr, a, b);
    free(arr);
    return 0;
}

void sang_ng_to_doan(bool arr[], int a, int b) {
    for(int i = a; i <= b; i++) {
        arr[i - a] = true;
    }

    for(int i = 2; i <= sqrt(b); i++) {
        for(int j = max(i * i, (a + i - 1) / i * i); j <= b; j += i) {
            arr[j - a] = false;
        }
    }
}

void out_put(bool arr[], int a, int b) {
    for(int i = max(a, 2); i <= b; i++) {
        if(arr[i - a]) {
            printf("%d ", i);
        }
    }
}
