#include <stdio.h>
#include <string.h>

#define SIZE(a) (int) strlen(a)

void CLEAN_BUFFER();
void SAFE_BUFFER(char []);
void GET(char [], int);

int main() {
    char note[20];
    GET(note, sizeof(note));
    printf("%s\n", note);
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

void GET(char note[], int a) {
    CLEAN_BUFFER();
    fgets(note, a, stdin);
    SAFE_BUFFER(note);
}
