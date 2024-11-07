#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
#define sz(a) (int) (a).size()

typedef vector<int> vi;

void fibo(vi &);

int main() {
    int n = 10;
    vi arr(n);

    fibo(arr);
    
    return 0;
}

void fibo(vi &arr) {
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i < sz(arr); i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    for(int i : arr) {
        cout << i << " ";
    }
}
