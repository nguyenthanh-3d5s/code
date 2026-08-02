#include <stdio.h>
#define MOD (int) (1e9+7)
#define MAX (int) (2e5+5)
#define MON(a, b) ((a + b) % MOD)

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
        int a = MON(arr[i - 1], arr[i - 2]);
        int b = MON(arr[i - 3], arr[i - 4]);
        int c = MON(arr[i - 5], arr[i - 6]);
        arr[i] = MON(MON(a, b), c);
    }
    
    printf("%d", arr[n]);
    
    return 0;
}
