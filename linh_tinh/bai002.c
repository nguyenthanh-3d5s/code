/*
Bài 2: Sàng số nguyên tố
input: 2 <= n <= 10^6
output: dãy số nguyên tố từ 0 > n
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define n_sang (int) 1e6+1

bool sang[n_sang];

void sang_ng_to();

int main() {
    int n;
    scanf("%d", &n);
    sang_ng_to();
    for(int i = 2; i <= n; i++) {
        if(sang[i]) {
            printf("%d ", i);
        }
    }
    return 0;
}

void sang_ng_to() {
    for(int i = 2; i < n_sang; i++) {
        sang[i] = 1;
    }
    for(int i = 2; i <= sqrt(n_sang); i++) {
        if(sang[i]) {
            for(int j = i * i; j < n_sang; j += i) {
                sang[j] = 0;
            }
        }
    }
}
