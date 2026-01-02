#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool check_ng_to(int);
bool check_chu_so(int);
void out_put(int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    out_put(a, b);
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

bool check_chu_so(int a) {
    int b = a;

    while(b) {
        int r = b % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7) {
            b /= 10;
            continue;
        }
        return false;
    }

    return check_ng_to(a);
}

void out_put(int a, int b) {
    int c = 0;

    for(int i = a; i <= b; i++) {
        if(check_chu_so(i)) {
            c++;
        }
    }

    printf("%d \n", c);
}
