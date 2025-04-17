#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    int dem = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            dem++;
        }
    }

    printf("%d\n", dem);

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ",i);
        }
    }
    printf("\n");

    return 0;
}
