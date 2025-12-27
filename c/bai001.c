#include <stdio.h>
#include <math.h>

#define yes printf("YES\n")
#define no printf("NO\n")

void check_ng_to(int);

int main() {
    int n;
    scanf("%d", &n);
    check_ng_to(n);
    return 0;
}

void check_ng_to(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            no;
            return;
        }
    }
    (n < 2) ? no : yes;
}
