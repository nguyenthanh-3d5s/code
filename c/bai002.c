#include <stdio.h>
#include <string.h>

#define SIZE(a) (int) strlen(a)

void CLEAN();
void SAFE(char []);
void GET(char [], int);

int main() {
    char note[20];
    GET(note, sizeof(note));
    printf("%s\n", note);
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

void GET(char note[], int a) {
    CLEAN();
    fgets(note, a, stdin);
    SAFE(note);
}
