#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float tb = (a + b + c * 2 + d * 3) / 7;
    if(tb >= 8) {
        printf("GIOI\n");
    }
    else if(tb >= 6.5) {
        printf("KHA\n");
    }
    else if(tb >= 5) {
        printf("TRUNG BINH\n");
    }
    else {
        printf("YEU\n");
    }
    return 0;
}
