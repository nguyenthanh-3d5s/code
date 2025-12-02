/*
Bài 3: Sàng số nguyên tố trên đoạn
input: 1 <= a < b <= 10^9, b - a <= 10^6
output: dãy số nguyên tố từ a đến b
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define n_sang_doan (int) 1e6+1
#define max(a, b) (a) > (b) ? (a) : (b)

bool sang[n_sang_doan];
void sang_ng_to_doan(int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    sang_ng_to_doan(a, b);
    for(int i = max(2, a); i <= b; i++) {
        if(sang[i - a]) {
            printf("%d ", i);
        }
    }
    return 0;
}

void sang_ng_to_doan(int a, int b) {
    for(int i = a; i <= b; i++) {
        sang[i - a] = 1;
    }
    for(int i = 2; i <= sqrt(b); i++) {
        for(int j = max(i*i, (a + i - 1) / i*i); j <= b; j += i) {
            sang[j - a] = 0;
        }
    }
}
