#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 2, _n = (n); i <= _n; i++)

int nt(int n) {
    if(n < 2) {
        return 0;
    }

    REP(i, sqrt(n)) {
        if(n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int cs_nt(int n) {
    while(n) {
        int r = n % 10;

        if(r != 2 && r != 3 && r != 5 && r != 7) {
            return 0;
        }

        n /= 10;
    }

    return 1;
}

int tong_nt(int n) {
    int sum = 0;

    while(n) {
        sum += n % 10;
        n /= 10;
    }

    if(nt(sum)) {
        return 1;
    }

    return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int cnt = 0;

    for(int i = a; i <= b; i++) {
        if(cs_nt(i) && nt(i) && tong_nt(i)) {
            cnt++;
        }
    }
    
    printf("%d\n", cnt);

    return 0;
}
