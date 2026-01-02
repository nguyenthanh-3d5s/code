#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define yes printf("Yes\n")
#define no printf("No\n")

bool check_ng_to(int);
void out_put(int);

int main() {
    int n;
    scanf("%d", &n);
    out_put(n);
    return 0;
}

bool check_ng_to(int n) {
    if(n < 2) {
        return false;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

void out_put(int n) {
    check_ng_to(n) ? yes : no;
}
