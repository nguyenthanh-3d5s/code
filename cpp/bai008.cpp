#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 7;
    int a[] = {4, 2, 5, 3, 5, 8, 3};

    sort(a, a + n);

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
