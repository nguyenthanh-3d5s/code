#include <stdio.h>Add commentMore actions
#include <stdlib.h>
#include <stdbool.h>

#define M 317

typedef struct {bool flag; int u;} node;
typedef struct {int x, y, v;} queue;

static inline bool test(node arr[][M], int x, int y, int n, int m) {
    return x < 0 || y < 0 || x >= n || y >= m || arr[x][y].flag == true || arr[x][y].u == 0;
}

static inline void push(node arr[][M], queue sub[], int x, int y, int l, int r) {
    arr[x][y].flag = true;   sub[r].x = x;    sub[r].y = y;    sub[r].v = l;
}

void input(node [][M], int [], int, int);
int bfs(node [][M], queue [], int [], int, int);
void output(queue [], int);

int main() {
    int n, m;
    scanf("%d %d ", &n, &m);

    node arr[n][M];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d ", &arr[i][j].u);
            arr[i][j].flag = false;
        }
    }
    
    int a[2];
    int b[2];
    
    input(arr, a, n, m);
    input(arr, b, n, m);
    
    queue *sub = (queue*) malloc(n * m * sizeof(queue));
    
    push(arr, sub, b[0], b[1], -1, 0);
    
    int cnt = bfs(arr, sub, a, n, m);
    
    if(cnt == 0) {
        printf("khong tim thay!");
    }
    else {
        output(sub, cnt - 1);
    }
    
    free(sub);
    return 0;
}

void input(node arr[][M], int a[], int n, int m) {
    do {
        scanf("%d %d", &a[0], &a[1]);
    } while(test(arr, a[0], a[1], n, m));
}

int bfs(node arr[][M], queue sub[], int a[], int n, int m) {
    int l = 0;
    int r = 1;
    
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    
    while(l != r) {
        int x = sub[l].x;
        int y = sub[l].y;

        for(int i = 0; i < 4; i++) {
            int xx = x + dx[i];
            int yy = y + dy[i];
            
            if(test(arr, xx, yy, n, m)) {
                continue;
            }
            
            push(arr, sub, xx, yy, l, r);
            
            r++;
            
            if(xx == a[0] && yy == a[1]) {
                return r;
            }
        }
        
        l++;
    }
    
    return 0;
}

void output(queue sub[], int pos) {
    while(pos != -1) {
        printf("(%d, %d) ", sub[pos].x, sub[pos].y);
        pos = sub[pos].v;
    }
}
