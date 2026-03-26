#include <stdio.h>

void de_quy_01(int);
void de_quy_02(int *);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    de_quy_01(a);
    printf("\n");
    de_quy_02(&b);
    printf("\n");
    printf("%d %d", a, b);
    return 0;
}

void de_quy_01(int a) {
    if(a == 0) return;
    printf("%d ", a);
    de_quy_01(a - 1);
}

void de_quy_02(int *a) {
    if(*a == 0) return;
    printf("%d ", *a);
    *a -= 1;
    de_quy_02(a);
}
