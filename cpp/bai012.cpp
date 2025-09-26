#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define SZ(a) (int) (a).size()

typedef long long ll;
typedef tuple<int,int,int> tl;
typedef vector<tl> viii;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    viii v;
    v.PB({2,1,4});
    v.PB({1,5,3});
    v.PB({2,1,3});
    sort(v.begin(), v.end());

    for(tl i : v) {
        printf("(%d, %d, %d) ", get<0>(i), get<1>(i), get<2>(i));
    }

    return 0;
}
