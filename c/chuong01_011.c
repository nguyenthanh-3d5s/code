#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("INVALID\n");
    }
    else {
        if(a == b && b == c) {
            printf("1\n");
        }
        elif(a == b || a == c || b == c) {
            printf("2\n");
        }
        elif(a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            printf("3\n");
        }
        else printf("4\n");
    }

    return 0;
}
