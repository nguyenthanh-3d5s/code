#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool chinh_phuong(int);
bool t_prime(int);
void out_put(int);

int main() {
    int n;
    scanf("%d", &n);
    out_put(n);
    return 0;
}

bool chinh_phuong(int a) {
    int b = sqrt(a);
    return b * b == a;
}

bool t_prime(int n) {
    int c = 0;

    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            c += 2;
            if(i == n / i) {
                c--;
            }
        }
    }

    if(c == 3) {
        return true;
    }
    
    return false;
}

void out_put(int n) {
    for(int i = 1; i <= n; i++) {
        if(chinh_phuong(i) && t_prime(i)) {
            printf("%d ", i);
        }
    }
}
