#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 5;
    int array[] = {2, 4, 1, 3, 5};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(array[j] > array[j + 1]) {
                swap(array[j],array[j + 1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
