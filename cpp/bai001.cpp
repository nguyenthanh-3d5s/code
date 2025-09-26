#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int a, b;
    string s;

    cin >> a >> b;
    // while(cin >> x)
    
    cin.ignore();
    getline(cin, s);

    cout << a << " " << b << " " << s << "\n";

    return 0;
}
