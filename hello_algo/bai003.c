#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *nestedLoop(char [], int, int);

int main() {
    int n = 2;
    int size = n * n * 26 + 1;
    char *res = (char *)malloc(size * sizeof(char));
    res[0] = '\0';
    
    printf("%s", nestedLoop(res, n, size));
    
    free(res);
    return 0;
}

char *nestedLoop(char res[], int n, int size) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            char tmp[26];
            snprintf(tmp, sizeof(tmp), "(%d, %d) ", i, j);
            strncat(res, tmp, size - strlen(res) - 1);
        }
    }
    
    return res;
}
