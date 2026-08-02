#include <stdio.h>
#define MOD (int) (1e9+7)
#define MAX (int) (2e5+5)

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[MAX];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    arr[4] = 8;
    arr[5] = 16;
    
    for(int i = 6; i <= n; i++) {
        int a = (arr[i - 1] + arr[i - 2]) % MOD;
        int b = (arr[i - 3] + arr[i - 4]) % MOD;
        int c = (arr[i - 5] + arr[i - 6]) % MOD;
        arr[i] = (a + b + c) % MOD;
    }
    
    printf("%d", arr[n]);
    
    return 0;
}
