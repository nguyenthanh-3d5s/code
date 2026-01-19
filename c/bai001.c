// Bài 1: Kiểm tra số nguyên tố

#include <stdio.h>
#include <math.h>

int check_ng_to(int);

int main() {
    int n;
    scanf("%d", &n);
    
    if(check_ng_to(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}

int check_ng_to(int n) {
    if(n < 2) {
        return 0;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }

    return 1;
}
