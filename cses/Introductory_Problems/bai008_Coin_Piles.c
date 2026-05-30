#include <stdio.h>
#define MIN(a, b) (a) < (b) ? (a) : (b)
#define MAX(a, b) (a) > (b) ? (a) : (b)

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int sum = a + b;
        int min = MIN(a, b);
        int max = MAX(a, b);

        if(sum % 3 == 0 && min * 2 >= max) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
