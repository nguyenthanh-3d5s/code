#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    double kc = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    
    printf("%.2lf\n", kc);
    
    return 0;
}
