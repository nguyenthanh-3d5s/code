// Bài 5: Kiểm tra số nguyên tố
// kiểm tra chữ số nguyên tố

#include <stdio.h>
#include <math.h>

int check_ng_to(int);
int check_chu_so(int);

int main() {
    int a, b, c = 0;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        if(check_chu_so(i)) {
            c++;
        }
    }

    printf("%d \n", c);
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

int check_chu_so(int a) {
    int b = a;

    while(b) {
        int r = b % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7) {
            b /= 10;
            continue;
        }
        return 0;
    }

    return check_ng_to(a);
}
