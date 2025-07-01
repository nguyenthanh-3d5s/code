#include <stdio.h>
#include <string.h>
#define ll long long

int main() {
    char chr[100];

    fgets(chr, 100, stdin);
    chr[strlen(chr) - 1] = '\0';

    char *token = strtok(chr, " ");

    char str[10][10];
    int n = 0;

    while(token != NULL) {
        strcpy(str[n++], token);
        token = strtok(NULL, " ");
    }

    for(int i = 0; i < n; i++) {
        printf("%s", str[i]);

        if(i != n - 1) {
            printf(" ");
        }
    }
    return 0;
}
