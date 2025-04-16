#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    char c;
    scanf("%c", &c);

    if(c == 'z' || c == 'Z') {
        printf("a\n");
    }
    elif(c >= 'A' && c <= 'Z') {
        printf("%c\n", c + 33);
    }
    else {
        printf("%c\n", c + 1);
    }

    return 0;
}
