#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    int n;
    cin >> n;
    cout << (isPerfectSquare(n) ? "YES" : "NO") << endl;
    return 0;
}
