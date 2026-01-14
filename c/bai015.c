// Bài 15: Phân tích thừa số nguyên tố bằng sàng nguyên tố

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define n (int) 1e6

int arr[n];

void sang_ng_to();
void thua_so_ng_to(int);

int main() {
    sang_ng_to();
    int t;
    scanf("%d", &t);
    while(t--) {
        int m;
        scanf("%d", &m);
        thua_so_ng_to(m);
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

void thua_so_ng_to(int m) {
    while(m != 1) {
        int i = arr[m];
        int c = 0;

        while(m % i == 0) {
            c++;
            m /= i;
        }

        printf("%d^%d", i, c);

        if(m != 1) {
            printf(" * ");
        }
    }
}
