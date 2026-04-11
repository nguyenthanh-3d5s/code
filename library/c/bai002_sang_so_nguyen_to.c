#include <stdio.h>
#include <math.h>
#define n (int) 1e6

int arr[n];

void sieve();

int main() {
    int m;
    scanf("%d", &m);
    sieve();
    for(int i = 0; i < m; i++) {
        if(arr[i]) {
            printf("%d ", i);
        }
    }
    return 0;
}

void sieve() {
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
