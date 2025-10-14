#include <bits/stdc++.h>
using namespace std;

bool hoan_hao(int);

int main() {
    
    return 0;
}

bool hoan_hao(int a) {
    int sum = 0;

    for(int i = 2; i <= sqrt(a); i++) {
        if(a % i == 0) {
            sum += i;
            sum += a / i;
        }
    }
    return sum + 1 == a;
}
