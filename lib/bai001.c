#include <stdio.h>
#define ll long long

ll min(ll a, ll b) {
    return a < b ? a : b;
}

ll max(ll a, ll b) {
    return a > b ? a : b;
}

double fix(double a, double b) {
    return a / b ? a / b : 0;
}

void swap(ll *a, ll *b) {
    ll tmp = *a;
    *a = *b;
    *b = tmp;
}

void cache_sf() {
    while(getchar() != '\n') {}
}

void cache_fs(char str[]) {
    if(str[strlen(str) - 1] != '\n') {
        cache_sf();
    }
    else {
        str[strlen(str) - 1] = '\0';
    }
}

ll gcd(ll a, ll b) {
    while(b) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    int x;
    while(scanf("%d", &x) != -1) {
        printf("%d ", x);
    }
    return 0;
}
