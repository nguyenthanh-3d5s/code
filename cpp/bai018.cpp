#include <bits/stdc++.h>
using namespace std;

void sap_xep_chon(int[], int);
bool cmp(int&, int&);
void hoan_vi(int&, int&);

int main() {

    return 0;
}

void sap_xep_chon(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(cmp(arr[i], arr[j])) {
                hoan_vi(arr[i], arr[j]);
            }
        }
    }
}

bool cmp(int &a, int &b) {
    return a > b;
}

void hoan_vi(int &a, int &b) {
    int r = a;
    a = b;
    b = r;
}
