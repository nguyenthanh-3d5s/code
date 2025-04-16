#include <stdio.h>
#define ll long long
#define yes printf("YES\n")
#define no printf("NO\n")

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) yes;
    else no;
    
    return 0;
}
