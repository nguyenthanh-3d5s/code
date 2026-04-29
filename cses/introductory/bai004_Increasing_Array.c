#include <stdio.h>
#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    scanf("%d", &arr[0]);

    ll cnt = 0;

    for(int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i - 1] > arr[i]) {
            int tmp = arr[i - 1] - arr[i];
            arr[i] += tmp;
            cnt += tmp;
        }
    }

    printf("%lld", cnt);
    return 0;
}
