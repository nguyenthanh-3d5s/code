// Bài 11: Số T-prime với nhiều test

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define n (int) 1e6

bool arr[n];

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
    for(int i = 2; i < n; i++) {
        arr[i] = true;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(arr[i]) {
            for(int j = i * i; j < n; j += i) {
                arr[j] = false;
            }
        }
    }
}

void out_put(int m) {
    int c = 0;

    for(int i = 2; i <= sqrt(m); i++) {
        if(arr[i]) {
            c++;
        }
    }

    printf("%d \n", c);
}
