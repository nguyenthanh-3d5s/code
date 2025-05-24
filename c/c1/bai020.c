#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    int ngang, doc;
    if(n % a == 0) {
        doc = n / a;
    }
    else {
        doc = n / a + 1;
    }
    if(m % a == 0) {
        ngang = m / a;
    }
    else {
        ngang = m / a + 1;
    }
    printf("%d\n", ngang * doc);
    return 0;
}
