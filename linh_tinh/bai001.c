/*
Bài 1: Kiểm tra số nguyên tố
input: 0 <= n <= 10^9
output: "Yes" or "No"
*/

#include<stdio.h>
#include<math.h>

int check_ng_to(int);

int main() {
    int n;
    scanf("%d", &n);
    if(check_ng_to(n)) {
        printf("Yes \n");
    }
    else printf("No \n");
    return 0;
}

int check_ng_to(int n) {
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}
