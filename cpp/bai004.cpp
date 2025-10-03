#include <bits/stdc++.h>
using namespace std;

bool nguyen_to(int);

int main() {
    
    return 0;
}

bool nguyen_to(int a) {
    if(a < 2) {
        return false;
    }

    for(int i = 2; i < sqrt(a); i++) {
        if(a % i == 0) {
            return false;
        }
    }

    return true;
}
