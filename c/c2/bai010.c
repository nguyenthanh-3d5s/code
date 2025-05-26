#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    int check = 0;
    FOR(i, 1, n) {
        int tmp;
        scanf("%d", &tmp);
        if(tmp == 2022) {
            check = 1;
        }
    }
    if(check == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
