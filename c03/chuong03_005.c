#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 2, _n = (n); i <= _n; i++)

int tong_cs(int n) {
    int sum = 0;

    while(n) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int smith(int n) {
    int tmp = n;
    int sum1 = tong_cs(n);
    int sum2 = 0;

    REP(i, sqrt(n)) {
        if(n % i == 0) {
            int d = tong_cs(i);

            while(n % i == 0) {
                sum2 += d;
                n /= i;
            }
        }
    }

    if(tmp == n) {
        return 0;
    }

    if(n > 1) {
        sum2 += tong_cs(n);
    }

    if(sum1 == sum2) {
        return 1;
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    if(smith(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    
    return 0;
}
