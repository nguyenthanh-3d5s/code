#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

typedef vector<int> vi;

int main() {
    int n = 10;
    vi arr(n);

    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}
