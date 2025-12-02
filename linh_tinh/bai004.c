/*
Bài 4: Sàng số nguyên tố
input:
số lượng test: 1 <= t <= 10^6
mỗi test: 0 <= n <= 10^6
output: "Yes" or "No"
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define n_sang (int) 1e6+1

bool sang[n_sang];
void sang_ng_to();

int main() {
    int t;
    scanf("%d", &t);
    sang_ng_to();
    while(t--) {
        int i;
        scanf("%d", &i);
        if(sang[i]) {
            printf("Yes \n");
        }
        else printf("No \n");
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
