#include <stdio.h>
#include <stdbool.h>
#define ll long long
#define n 10
#define m 10

int gird[n][m];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

bool dfs(int x, int y, int a, int b) {
    if(x == a && y == b) {
        return 1;
    }

    gird[x][y] = 0;

    for(int k = 0; k < 4; k++) {
        int i = x + dx[k];
        int j = y + dy[k];

        if(i >= 0 && i < n && j >= 0 && j < m && gird[i][j] == 1) {
            if(dfs(i, j, a, b)) {
                printf("(%d %d) ", i, j);
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    
    return 0;
}
