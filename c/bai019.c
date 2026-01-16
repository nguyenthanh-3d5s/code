// Bài 19: Số sphenic

#include <stdio.h>
#include <math.h>

int sphenic(int);

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        printf("%d \n", sphenic(n));
    }
    return 0;
}

int sphenic(int n) {
    int res = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        int cnt = 0;
        while(n % i == 0) {
            cnt++;
            n /= i;
        }
        if(cnt >= 2) return 0;
        if(cnt == 1) res++;
    }
    if(n != 1) res++;
    return res == 3;
}
