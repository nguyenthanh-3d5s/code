#include <bits/stdc++.h>
using namespace std;

#define sz(a) (int) (a).size()

typedef vector<int> vi;

int main() {
    int n; cin >> n;
    vi arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    arr.erase(arr.begin() + 1, arr.begin() + 4);

    arr.erase(arr.begin() + 2);

    for(int i = 0; i < sz(arr); i++) {
        int j = *(arr.begin() + i);
        cout << j << " ";
    }

    return 0;
}
