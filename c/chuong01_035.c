#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int h, m;
    scanf("%d %d", &h, &m);

    printf("%d\n", 1440 - h * 60 - m);

    return 0;
}
