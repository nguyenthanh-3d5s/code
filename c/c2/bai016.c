#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)

int main() {
    int n;
    scanf("%d", &n);
    if(n == 0) {
        printf("1\n");
        return 0;
    }
    int cnt = 0;
    while(n != 0) {
        cnt++;
        n /= 10;
    }
    printf("%d\n", cnt);
    return 0;
}
