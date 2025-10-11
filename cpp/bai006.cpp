#include <bits/stdc++.h>
using namespace std;

bool hoan_hao(int);
bool chinh_phuong(int);

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

    if(chinh_phuong(a)) {
        sum -= sqrt(a);
    }
    return sum + 1 == a;
}

bool chinh_phuong(int a) {
    int b = sqrt(a);
    return b * b == a;
}
