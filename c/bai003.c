// Bài 3: hiển thị số nguyên tố trong đoạn [a, b]
// sử dụng sàng nguyên tố trên đoạn

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void sang_ng_to_doan(bool[], int, int);
int max(int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    bool *arr = (bool*) calloc(b - a + 1, sizeof(bool));
    sang_ng_to_doan(arr, a, b);
    
    for(int i = max(a, 2); i <= b; i++) {
        if(arr[i - a]) {
            printf("%d ", i);
        }
    }
    
    free(arr);
    return 0;
}

void sang_ng_to_doan(bool arr[], int a, int b) {
    for(int i = a; i <= b; i++) {
        arr[i - a] = 1;
    }

    for(int i = 2; i <= sqrt(b); i++) {
        for(int j = max(i * i, (a + i - 1) / i * i); j <= b; j += i) {
            arr[j - a] = 0;
        }
    }
}

int max(int a, int b) {
    return (a > b) ? a : b;
}
