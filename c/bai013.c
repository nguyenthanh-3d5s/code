// Bài 13: Ước nguyên tố nhỏ nhất

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define n (int) 1e6

int arr[n];

void sang_ng_to();
void out_put(int);

int main() {
    sang_ng_to();
    int t;
    scanf("%d", &t);
    while(t--) {
        int m;
        scanf("%d", &m);
        out_put(m);
    }
    return 0;
}

void sang_ng_to() {
    for(int i = 1; i < n; i++) {
        arr[i] = i;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(arr[i] == i) {
            for(int j = i * i; j < n; j += i) {
                if(arr[j] == j) {
                    arr[j] = i;
                }
            }
        }
    }
}

void out_put(int m) {
    for(int i = 1; i <= m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
