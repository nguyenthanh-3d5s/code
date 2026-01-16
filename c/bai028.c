// Bài 28: tổng chữ số

#include <stdio.h>
#include <math.h>
#define ll long long

int sum_digit(ll);

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        ll n;
        scanf("%lld", &n);
        printf("%d \n", sum_digit(n));
    }
    return 0;
}

int sum_digit(ll n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
