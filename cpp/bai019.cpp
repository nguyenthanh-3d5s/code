#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
    int n; cin >> n;
    vi arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(auto it = arr.begin(); it != arr.end(); it++) {
        int i = *it;
        cout << i << " ";
    }

    cout << "\n";

    for(int i = 0; i < n; i++) {
        int j = *(arr.begin() + i);
        cout << j << " ";
    }

    return 0;
}
