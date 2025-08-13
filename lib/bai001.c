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

int main() {
    int x;
    while(scanf("%d", &x) != -1) {
        printf("%d ", x);
    }
    return 0;
}
