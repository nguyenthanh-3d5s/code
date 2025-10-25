#include <bits/stdc++.h>
using namespace std;

bool nguyen_to(int);

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
