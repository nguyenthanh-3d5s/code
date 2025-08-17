#include <stdio.h>
#include <string.h>
#define ll long long

int main() {
    char str_1_[100];

    fgets(str_1_, 100, stdin);
    str_1_[strlen(str_1_) - 1] = '\0';

    char *token = strtok(str_1_, " ");

    char str_2_[10][10];
    int n_2 = 0;

    while(token != NULL) {
        strcpy(str_2_[n_2++], token);
        token = strtok(NULL, " ");
    }

    for(int i = 0; i < n_2; i++) {
        printf("%s", str_2_[i]);

        if(i != n_2 - 1) {
            printf(" ");
        }
    }
    return 0;
}
