#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    char c;
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z') {
        c -= 32;
    }
    else if(c >= 'A' && c <= 'Z') {
        c += 32;
    }
    printf("%c\n", c);
    return 0;
}
