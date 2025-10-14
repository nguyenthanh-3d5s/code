#include <bits/stdc++.h>
using namespace std;

bool hoan_hao(int);

int main() {
    
    return 0;
}

bool hoan_hao(int n) {
    int sum = 0;

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            sum += i;

            if(i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum + 1 == n;
}
