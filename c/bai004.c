// Bài 4: Kiểm tra số nguyên tố với nhiều test

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define n (int) 1e6
#define yes printf("Yes\n")
#define no printf("No\n")

bool arr[n];

void sang_ng_to();
void out_put(int);

int main() {
    sang_ng_to();
    int t;
    scanf("%d", &t);
    while(t--) {
        int a;
        scanf("%d", &a);
        out_put(a);
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

void out_put(int i) {
    arr[i] ? yes : no;
}
