#include <stdio.h>
#define ll long long
#define n 10
#define m 10

int gird[n][m];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int da[n * m];
int db[n * m];
int dc[n * m];

int l = 0;
int r = 1;

void bfs(int x_, int y_, int a, int b) {
    gird[x_][y_] = 0;
    da[0] = x_;
    db[0] = y_;
    dc[0] = -1;
    
    while(l != r) {
        int x = da[l];
        int y = db[l];

        for(int k = 0; k < 4; k++) {
            int i = x + dx[k];
            int j = y + dy[k];

            if(i >= 0 && i < n && j >= 0 && j < m && gird[i][j] == 1) {
                gird[i][j] = 0;
                da[r] = i;
                db[r] = j;
                dc[r++] = l;

                if(i == a && j == b) {
                    return;
                }
            }
        }
        l++;
    }
}

void trace() {
    int pos = r - 1;

    while(pos != -1) {
        printf("(%d %d) ", da[pos], db[pos]);
        pos = dc[pos];
    }
}

int main() {
    
    return 0;
}
