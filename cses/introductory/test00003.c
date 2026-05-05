#include <stdio.h>
#include <string.h>
#define SIZE(a) (int) strlen(a)
#define n (int) 1e6
#define m 26

int main() {
    char note[n];
    scanf("%s", note);

    int arr[m] = {0};
    int len = SIZE(note)

    for(int i = 0; i < len; i++) {
        int j = note[i] - 'A';
        arr[j]++;
    }

    int cnt = 0;
    int tmp = 0;

    for(int i = 0; i < m; i++) {
        if(arr[i] % 2 != 0) {
            cnt++;
            tmp = i;
        }
    }

    if(cnt > 1) {
        printf("NO SOLUTION");
    }
    else {
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < (arr[i] / 2); j++) {
                printf("%c", i + 'A');
            }
        }

        if(cnt) printf("%c", tmp + 'A');

        for(int i = m - 1; i >= 0; i--) {
            for(int j = 0; j < (arr[i] / 2); j++) {
                printf("%c", i + 'A');
            }
        }
    }

    return 0;
}
