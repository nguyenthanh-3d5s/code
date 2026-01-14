// Bài 14: Phân tích thừa số nguyên tố

#include <stdio.h>
#include <math.h>

void thua_so_ng_to(int);

int main() {
    int n;
    scanf("%d", &n);
    thua_so_ng_to(n);
    return 0;
}

void thua_so_ng_to(int n) {
    int i = 2;

    while(i <= sqrt(n)) {
        if(n % i == 0) {
            int c = 0;

            while(n % i == 0) {
                c++;
                n /= i;
            }

            printf("%d^%d", i, c);

            if(i != 1) {
                printf(" * ");
            }
        }
        i++;
    }

    if(n > 2) {
        printf("%d^1 ", n);
    }
}
