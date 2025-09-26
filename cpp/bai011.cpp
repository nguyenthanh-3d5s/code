#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define SZ(a) (int) (a).size()

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<pi> vii;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vii v;
    v.PB({1,5});
    v.PB({2,3});
    v.PB({1,2});
    sort(v.begin(), v.end());

    for(pi i : v) {
        printf("(%d, %d) ", i.F, i.S);
    }

    return 0;
}
