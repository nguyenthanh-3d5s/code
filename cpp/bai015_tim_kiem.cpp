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

    int l = 0, r = n - 1;
    int pos = -1;

    while (l <= r) {
        int m = (l + r) / 2;

        if (array[m] == x) {
            pos = m;
            r = m - 1;
        }
        else if (array[m] > x) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    return 0;
}
