#include <stdio.h>
#define ll long long
#define yes printf("YES\n")
#define no printf("NO\n")

int main() {
    int n;
    scanf("%d", &n);

    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) yes;
    else no;

    return 0;
}
