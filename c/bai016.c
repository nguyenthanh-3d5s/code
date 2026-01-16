// Bài 16: Số lượng thừa số nguyên tố khác nhau của n

#include <stdio.h>
#include <math.h>

int count(int);

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        printf("%d \n", count(n));
    }
    return 0;
}

int count(int n) {
    int res = 0;
    for(int i = 2; i < sqrt(n); i++) {
        if(n % i == 0) {
            res++;
            while(n % i == 0) {
                n /= i;
            }
        }
    }
    if(n != 1) {
        res++;
    }
    return res;
}
