// Bài 7: Cặp số nguyên tố có tổng bằng n

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool check_ng_to(int);
void out_put(int);

int main() {
    int n;
    scanf("%d", &n);
    out_put(n);
    return 0;
}

bool check_ng_to(int n) {
    if(n < 2) {
        return false;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

void out_put(int n) {
    for(int i = 2; i <= n / 2; i++) {
        if(check_ng_to(i) && check_ng_to(n - i)) {
            printf("%d %d \n", i, n - i);
        }
    }
}
