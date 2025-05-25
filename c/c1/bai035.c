#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    printf("%d\n", 1440 - h * 60 - m);
    return 0;
}
