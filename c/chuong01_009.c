#include <stdio.h>
#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        printf("YES\n")
    }
    else {
        printf("NO\n")
    }

    return 0;
}
