/*
Bài 6: N số nguyên tố đầu tiên
input: 1 <= n <= 10^4
output: dãy n số nguyên tố đầu tiên
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
    for(int i = 0, c = 0; c < n; i++) {
        if(sang[i]) {
            printf("%d ", i);
            c++;
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
