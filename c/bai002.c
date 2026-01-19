// Bài 2: Triển khai sàng nguyên tố

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define n (int) 1e6

bool arr[n];

void sang_ng_to();

int main() {
    sang_ng_to();
    return 0;
}

void sang_ng_to() {
    for(int i = 2; i < n; i++) {
        arr[i] = 1;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(arr[i]) {
            for(int j = i * i; j < n; j += i) {
                arr[j] = 0;
            }
        }
    }
}
