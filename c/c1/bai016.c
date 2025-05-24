#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    char c;
    scanf("%c", &c);
    if(c == 'z' || c == 'Z') {
        printf("a\n");
    }
    else if(c >= 'A' && c < 'Z') {
        c += 32 + 1;
        printf("%c\n", c);
    }
    else {
        c += 1;
        printf("%c\n", c);
    }
    return 0;
}
