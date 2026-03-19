#include <stdio.h>
#include <string.h>

#define SIZE(a) (int) strlen(a)

typedef struct {char note[20]; int a;} table;

void CLEAN_BUFFER();
void SAFE_BUFFER(char []);
void GET(char [], int);
int UPPER_BOUND(table [], int, int);
void VLOOKUP(table [], table [], int, int);

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    table cell_01[n], cell_02[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &cell_01[i].a);
    }

    for(int i = 0; i < m; i++) {
        GET(cell_02[i].note, sizeof(cell_02[i].note));
        scanf("%d", &cell_02[i].a);
    }
    
    VLOOKUP(cell_01, cell_02, n, m);

    for(int i = 0; i < n; i++) {
        printf("%d %s\n", cell_01[i].a, cell_01[i].note);
    }

    return 0;
}

void CLEAN_BUFFER() {
    while(getchar() != '\n');
}

void SAFE_BUFFER(char note[]) {
    if(note[SIZE(note) - 1] != '\n') {
        CLEAN_BUFFER();
    }
    else {
        note[SIZE(note) - 1] = '\0';
    }
}

void GET(char note[], int n) {
    CLEAN_BUFFER();
    fgets(note, n, stdin);
    SAFE_BUFFER(note);
}

int UPPER_BOUND(table cell[], int x, int n) {
    int pos = -1;
    int l = 0;
    int r = n - 1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(cell[m].a == x) {
            pos = m;
            l = m + 1;
        }
        else if(cell[m].a < x) {
            l = m + 1;
            pos = l;
        }
        else {
            r = m - 1;
        }
    }

    return (pos == n) ? pos-1 : pos;
}

void VLOOKUP(table cell_01[], table cell_02[], int n, int m) {
    for(int i = 0; i < n; i++) {
        int pos = UPPER_BOUND(cell_02, cell_01[i].a, m);
        
        if(pos < 0) {
            strcpy(cell_01[i].note, "INVALUE");
        }
        else {
            strcpy(cell_01[i].note, cell_02[pos].note);
        }
    }
}
