#include <stdio.h>
#define ll long long
#define n_1 10
#define m_1 10

int gird_1_[n_1][m_1];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int arr_1_[n_1 * m_1];
int arr_2_[n_1 * m_1];
int arr_3_[n_1 * m_1];

int l = 0;
int r = 1;

void bfs(int a, int b) {
    while(l != r) {
        int x = arr_1_[l];
        int y = arr_2_[l];

        for(int k = 0; k < 4; k++) {
            int i = x + dx[k];
            int j = y + dy[k];

            if(i >= 0 && i < n_1 && j >= 0 && j < m_1 && gird_1_[i][j] == 1) {
                gird_1_[i][j] = 0;
                arr_1_[r] = i;
                arr_2_[r] = j;
                arr_3_[r++] = l;

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
        printf("(%d %d) ", arr_1_[pos], arr_2_[pos]);
        pos = arr_3_[pos];
    }
}

int main() {
    gird_1_[x][y] = 0;
    arr_1_[l] = x;
    arr_2_[l] = y;
    arr_3_[l] = -1;
    return 0;
}
