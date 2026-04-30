#include <stdio.h>
#include <stdlib.h>
#define n (int) 1e7

int main() {
    int m;
    scanf("%d", &m);

    if (m == 1) { printf("1\n"); return 0; }
    if (m < 4) { printf("NO SOLUTION\n"); return 0; }

    char note[n];
    char *pos = note;

    for (int i = 2; i <= m; i += 2) {
        pos += sprintf(pos, "%d ", i);
    }

    for (int i = 1; i <= m; i += 2) {
        pos += sprintf(pos, "%d ", i);
    }

    printf("%s", note);
    return 0;
}
