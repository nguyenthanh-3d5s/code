#include <stdio.h>
#include <string.h>
#define n (int) 1e6
#define SIZE(a) (int) strlen(a)

int main() {
    char note[n];
    scanf("%s", note);

    int max = 1;
    int cnt = 1;

    for(int i = 1; i < SIZE(note); i++) {
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

    printf("%d", max);
    return 0;
}
