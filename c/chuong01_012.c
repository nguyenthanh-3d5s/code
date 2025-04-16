#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int t, n;
    scanf("%d %d", &t, &n);

    if(t < 1 || t > 12 || n <= 0) printf("INVALID\n");
    else {
        if(t == 2) {
            if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
                printf("29\n");
            }
            else printf("28\n");
        }
        elif(t == 4 || t == 6 || t == 9 || t == 11) {
            printf("30\n");
        }
        else printf("31\n");
    }

    return 0;
}
