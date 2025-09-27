#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define SZ(a) (int) (a).size()

typedef long long ll;
typedef tuple<int,int,int> tl;
typedef vector<tl> viii;

bool comp(string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> v = {"banana", "apple", "z", "cat", "dog", "apple"};

    sort(v.begin(), v.end(), comp);

    for(string i : v) {
        cout << i << " ";
    }

    return 0;
}
