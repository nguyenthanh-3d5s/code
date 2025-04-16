#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    char c;
    scanf("%c", &c);

    if(c >= 'a' && c <= 'z') {
        c -= 32;
    }
    elif(c >= 'A' && c <= 'Z') {
        c += 32;
    }
    
    printf("%c\n", c);

    return 0;
}
