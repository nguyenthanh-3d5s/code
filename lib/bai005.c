#include <stdio.h>
#define ll long long

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int x = 1, y = 1;
    for(int k = 0; k < 4; k++) {
        int i = x + dx[k];
        int j = y + dy[k];
        printf("%d ", arr[i][j]);
    }

    return 0;
}
