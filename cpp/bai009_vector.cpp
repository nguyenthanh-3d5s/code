#include <bits/stdc++.h>
using namespace std;

#define sz(a) (int) (a).size()

typedef long long ll;
typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vi v = {4,2,5,3,5,8,3};
    
    sort(v.begin(),v.end());

    for(int i = 0; i < sz(v); i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
