// Bài 18: cho n!, đếm số lượng chữ số 0

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
    for(int i = 5; i <= n; i += 5) {
        int tmp = i;
        while(tmp % 5 == 0) {
            res++;
            tmp /= 5;
        }
    }
    return res;
}
