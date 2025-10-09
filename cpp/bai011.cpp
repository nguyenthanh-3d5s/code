#include <bits/stdc++.h>
using namespace std;

#define n (int) 1e6

bool arr[n];

void sang_nguyen_to();

int main() {
    
    return 0;
}

void sang_nguyen_to() {
    for(int i = 2; i < n; i++) {
        arr[i] = true;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(arr[i]) {
            for(int j = i * i; j < n; j += i) {
                arr[j] = false;
            }
        }
    }
}
