/*
Bài 5: Số nguyên tố + chữ số nguyên tố
input:
số lượng test: 1 <= t <= 10^6
mỗi test: 1 <= a < b <= 10^6
điều kiện 1: số nguyên tố
điều kiện 2: mỗi chữ số là số nguyên tố
output: số lượng số trong đoạn a-b thỏa mãn đk1, đk2
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define n_sang (int) 1e6+1

bool sang[n_sang];
void sang_ng_to();
int check_chu_so_ng_to(int);

int main() {
    int t;
    scanf("%d", &t);
    sang_ng_to();
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int c = 0;
        for(int i = a; i <= b; i++) {
            if(sang[i] && check_chu_so_ng_to(i)) {
                c++;
            }
        }
        printf("%d \n", c);
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

int check_chu_so_ng_to(int n) {
    while(n) {
        int r = n % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7) {
            n /= 10;
            continue;
        }
        return 0;
    }
    return 1;
}
