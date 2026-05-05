#include <stdio.h>
#include <string.h>
#define n (int) 1e6

int main() {
    char note[n];
    scanf("%s", note);

    int max = 1;
    int cnt = 1;

    for(int i = 1, len = strlen(note); i < len; i++) {
        if(note[i - 1] != note[i]) {
            if(max < cnt) {
                max = cnt;
            }
            cnt = 1;
        }
        else {
            cnt++;
        }
    }

    printf("%d", (max < cnt) ? cnt : max);
    return 0;
}
