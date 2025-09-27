#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define SZ(a) (int) (a).size()

typedef long long ll;
typedef tuple<int,int,int> tl;
typedef vector<tl> viii;

typedef struct P {
    int x, y;

    bool operator<(const P &p) {
        if (x != p.x) return x < p.x;
        else return y < p.y;
    }
} P;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    P a = {1, 2};
    P b = {1, 3};

    cout << (a < b);

    return 0;
}
