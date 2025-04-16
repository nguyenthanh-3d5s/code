#include <stdio.h>
#define ll long long
#define yes printf("YES\n")
#define no printf("NO\n")

int main() {
    int n;
    scanf("%d", &n);

    if(n%2 == 0) yes;
    else no;

    if(n%3 == 0 && n%5 == 0) yes;
    else no;

    if(n%3 == 0 && n%7 != 0) yes;
    else no;

    if(n%3 == 0 || n%7 == 0) yes;
    else no;

    if(n > 30 && n < 50) yes;
    else no;

    if(n >= 30 && (n%2 == 0 || n%3 == 0 || n%5 == 0)) yes;
    else no;

    int r = n % 10;

    if(n >= 10 && n <= 99 && (r == 2 || r == 3 || r == 5 || r == 7)) yes;
    else no;

    if(n <= 100 && n%23 == 0) yes;
    else no;

    if(n < 10 || n > 20) yes;
    else no;

    if(r%3 == 0) yes;
    else no;
    
    return 0;
}
