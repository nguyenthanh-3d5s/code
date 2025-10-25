#include <bits/stdc++.h>
using namespace std;

#define sz(a) (int) (a).size()

bool doi_xung(string);

int main() {
    
    return 0;
}

bool doi_xung(string str) {
    int l = 0;
    int r = sz(str) - 1;

    while(l < r) {
        if(str[l] != str[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
