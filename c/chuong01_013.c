#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    int nam = n / 365;
    n %= 365;

    int tuan = n / 7;
    n %= 7;

    printf("%d %d %d\n", nam, tuan, n);
    
    return 0;
}
