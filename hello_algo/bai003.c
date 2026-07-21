#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *nestedLoop(int);

int main() {
    char *res = nestedLoop(2);
    
    printf("%s", res);
    
    free(res);
    return 0;
}

char *nestedLoop(int n) {
    int size = n * n * 26 + 1;
    
    char *res = malloc(size * sizeof(char));
    res[0] = '\0';
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            char tmp[26];
            snprintf(tmp, sizeof(tmp), "(%d, %d), ", i, j);
            strncat(res, tmp, size - strlen(res) - 1);
        }
    }
    
    return res;
}
