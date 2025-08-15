#include <stdio.h>
#define ll long long
#define n_1 10
#define m_1 10

int gird_1_[n_1][m_1];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void loang(int x, int y) {
    gird_1_[x][y] = 0;

    for(int k = 0; k < 4; k++) {
        int i = x + dx[k];
        int j = y + dy[k];

        if(i >= 0 && i < n_1 && j >= 0 && j < m_1 && gird_1_[i][j] == 1) {
            loang(i, j);
        }
    }
}

int main() {

    return 0;
}
