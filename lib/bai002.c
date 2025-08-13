#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define ll long long
#define n_1 (int) 1e7

bool arr_1[n_1];

void sang() {
    for(int i = 2; i < n_1; i++) {
        arr_1[i] = 1;
    }

    for(int i = 2; i <= sqrt(n_1); i++) {
        if(arr_1[i]) {
            for(int j = i * i; j < n_1; j += i) {
                arr_1[j] = 0;
            }
        }
    }
}

int main() {
    sang();
    
    return 0;
}
