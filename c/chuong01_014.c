#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float tb = (a + b + c * 2 + d * 3) / 7;

    if(tb >= 8) {
        printf("GIOI\n");
    }
    elif(tb >= 6.5) {
        printf("KHA\n");
    }
    elif(tb >= 5) {
        printf("TRUNG BINH\n");
    }
    else {
        printf("YEU\n");
    }

    return 0;
}
