#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define ll long long
#define n (int) 1e7

bool arr[n];

void sang() {
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

int main() {
    sang();
    
    return 0;
}
