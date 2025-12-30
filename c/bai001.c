#include <stdio.h>
#include <math.h>

void check_ng_to(int);

int main() {
    int n;
    scanf("%d", &n);
    check_ng_to(n);
    return 0;
}

void check_ng_to(int n) {
    if(n < 2) {
        printf("No\n");
        return;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            printf("No\n");
            return;
        }
    }

    printf("Yes\n");
}
