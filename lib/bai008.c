#include <stdio.h>
#include <string.h>
#define ll long long

int main() {
    char str[100];
    fgets(str, 100, stdin);

    char *token = strtok(str, " ");

    while(token != NULL) {
        printf("%s", token);
        token = strtok(NULL, " ");

        if(token != NULL) {
            printf(" ");
        }
    }
    return 0;
}
