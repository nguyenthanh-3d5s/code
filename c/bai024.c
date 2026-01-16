// Bài 24: số chính phương trên đoạn

#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int c1 = ceil(sqrt(a)), c2 = sqrt(b);
        printf("%d \n", c2 - c1 + 1);
    }
    return 0;
}
