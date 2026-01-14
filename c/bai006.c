// Bài 6: Liệt kê n số nguyên tố đầu tiên

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
    int i = 2;
    int c = 0;

    while(c < n) {
        if(check_ng_to(i)) {
            printf("%d ", i);
            c++;
        }

        i++;
    }
}
