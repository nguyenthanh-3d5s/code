#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int t, n;
    scanf("%d %d", &t, &n);
    if(t >= 1 && t <= 12 && n > 0) {
        if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12) {
            printf("31\n");
        }
        else if(t == 4 || t == 6 || t == 9 || t == 11) {
            printf("30\n");
        }
        else {
            if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
                printf("29\n");
            }
            else {
                printf("28\n");
            }
        }
    }
    else {
        printf("INVALID\n");
    }
    return 0;
}
