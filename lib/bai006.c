#include <stdio.h>
#define ll long long
#define n 10
#define m 10

int gird[n][m];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int da[n * m];
int db[n * m];
int cnt = 0;

void dfs(int x, int y, int a, int b) {
    if(x == a && y == b) {
        return;
    }

    gird[x][y] = 0;

    for(int k = 0; k < 4; k++) {
        int i = x + dx[k];
        int j = y + dy[k];

        if(i >= 0 && i < n && j >= 0 && j < m && gird[i][j] == 1) {
            dfs(i, j, a, b);
            da[cnt] = i;
            db[cnt++] = j;
            return;
        }
    }
}

int main() {
    
    return 0;
}
