#include <bits/stdc++.h>
using namespace std;

bool nguyen_to(int);
bool chu_so(int);

int main() {
    
    return 0;
}

bool nguyen_to(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

bool chu_so(int n) {
    int sum = 0;

    while(n) {
        int r = n % 10;
        sum += r;

        if(r == 2 || r == 3 || r == 5 || r == 7) {
            n /= 10;
            continue;
        }
        return false;
    }
    return nguyen_to(sum);
}
