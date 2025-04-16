#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    char c;
    scanf("%c", &c);

    if(c >= 'a' && c <= 'z') {
        printf("LOWER\n");
    }
    elif(c >= 'A' && c <= 'Z') {
        printf("UPPER\n");
    }
    elif(c >= '0' && c <= '9') {
        printf("DIGIT");
    }
    else {
        printf("SPECIAL");
    }

    return 0;
}
