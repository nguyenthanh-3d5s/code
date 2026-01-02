#include <stdio.h>
#include <stdbool.h>

bool ucln(int, int);
void out_put(int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    out_put(a, b);
    return 0;
}

bool ucln(int a, int b) {
    while(b) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a == 1;
}

void out_put(int a, int b) {
    for(int i = a; i < b; i++) {
        for(int j = i + 1; j <= b; j++) {
            if(ucln(i, j)) {
                printf("%d %d \n", i, j);
            }
        }
    }
}
