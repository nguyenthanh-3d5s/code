#include <stdio.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 0, _n = (n); i <= _n; i++)

int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);

    REP(i, n / a) {
        int r = n - a * i;

        if(r % b == 0) {
            printf("YES\n");
            
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}
