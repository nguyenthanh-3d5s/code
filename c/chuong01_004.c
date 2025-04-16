#include <stdio.h>
#define ll long long

int main() {
    int r;
    scanf("%d", &r);
    
    double cv = 2 * 3.14 * r;
    double dt = 3.14 * r * r;
    
    printf("%.4lf %.4lf\n", cv, dt);
    
    return 0;
}
