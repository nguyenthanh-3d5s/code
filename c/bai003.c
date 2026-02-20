#include <stdio.h>
#include <string.h>

#define SIZE(a) (int) strlen(a)

typedef struct {char note[20]; int a;} table;

void CLEAN();
void SAFE(char []);
void GET(char [], int);
int SUMIF(table [], char [], int);

int main() {
    int n;
    scanf("%d", &n);
    table cell[n];
    for(int i = 0; i < n; i++) {
        GET(cell[i].note, sizeof(cell[i].note));
        scanf("%d", &cell[i].a);
    }
    printf("%d\n", SUMIF(cell, "bac", n));
    return 0;
}

void CLEAN() {
    while(getchar() != '\n');
}

void SAFE(char note[]) {
    if(note[SIZE(note) - 1] != '\n') {
        CLEAN();
    }
    else {
        note[SIZE(note) - 1] = '\0';
    }
}

void GET(char note[], int n) {
    CLEAN();
    fgets(note, n, stdin);
    SAFE(note);
}

int SUMIF(table cell[], char note[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(strcmp(cell[i].note, note) == 0) {
            sum += cell[i].a;
        }
    }
    return sum;
}
