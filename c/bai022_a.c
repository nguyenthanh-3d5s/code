// Bài 22_a: cho [a, b], tìm x biết x chia hết cho số nguyên tố và chia hết cho bình phương của nguyên tố đó

#include <stdio.h>
#include <math.h>

int sodep(int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++) {
        if(sodep(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

int sodep(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        int cnt = 0;
        while(n % i == 0) {
            cnt++;
            n /= i;
        }
        if(cnt >= 2) {
            return 1;
        }
        return 0;
    }
    return 0;
}
