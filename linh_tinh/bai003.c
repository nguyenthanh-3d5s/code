/*
Bài 3: Sàng số nguyên tố trên đoạn
input: 1 <= l < r <= 10^9, r - l <= 10^6
output: dãy số nguyên tố từ l đến r
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define n_sang_doan (int) 1e6+1
#define max(a, b) (a) > (b) ? (a) : (b)

bool sang[n_sang_doan];
void sang_ng_to_doan(int, int);

int main() {
    int l, r;
    scanf("%d %d", &l, &r);
    sang_ng_to_doan(l, r);
    for(int i = max(2, l); i <= r; i++) {
        if(sang[i - l]) {
            printf("%d ", i);
        }
    }
    return 0;
}

void sang_ng_to_doan(int l, int r) {
    for(int i = l; i <= r; i++) {
        sang[i - l] = 1;
    }
    for(int i = 2; i <= sqrt(r); i++) {
        for(int j = max(i*i, (l + i - 1) / i*i); j <= r; j += i) {
            sang[j - l] = 0;
        }
    }
}
