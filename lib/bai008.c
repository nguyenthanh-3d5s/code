#include <stdio.h>
#include <string.h>
#define ll long long

void cache_sf() {
    while(getchar() != '\n') {}
}

void cache_fs(char str[]) {
    if(str[strlen(str) - 1] != '\n') {
        cache_sf();
    }
    else {
        str[strlen(str) - 1] = '\0';
    }
}

int main() {
    char str_1_[100];

    fgets(str_1_, 100, stdin);
    cache(str_1_);

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
