#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a) {
        if(a == b && b == c) {
            printf("1\n");
        }
        else if(a == b || a == c || b == c) {
            printf("2\n");
        }
        else if(a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            printf("3\n");
        }
        else {
            printf("4\n");
        }
    }
    else {
        printf("INVALID\n");
    }
    return 0;
}
