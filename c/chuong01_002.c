#include <stdio.h>
#define ll long long

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    ll s = 1ll * a * (b + c) + 1ll * b * (a + c);
    
    printf("%lld\n", s);
    
    return 0;
}
