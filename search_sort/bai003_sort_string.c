#include <stdio.h>
#include <string.h>
#define n 100

void SWAP(char *, char *);
void PART(char [], int *, int *);
void SORT(char [], int, int);

int main() {
    char note[n];
    scanf("%s", note);
    int len = strlen(note);

    SORT(note, 0, len - 1);

    printf("%s\n", note);

    return 0;
}

void SWAP(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void PART(char note[], int *low, int *high) {
    int l = *low;
    int r = *high;
    int m = *low;

    char val = note[l] + (note[r] - note[l]) / 2;

    while(m <= r) {
        if(note[m] == val) {
            m++;
        }
        else if(note[m] < val) {
            SWAP(&note[l], &note[m]);
            l++;
            m++;
        }
        else {
            SWAP(&note[m], &note[r]);
            r--;
        }
    }

    *low = l;
    *high = r;
}

void SORT(char note[], int l, int r) {
    while(l < r) {
        int low = l;
        int high = r;
        PART(note, &low, &high);

        if(low - l < r - high) {
            SORT(note, l, low - 1);
            l = high + 1;
        }
        else {
            SORT(note, high + 1, r);
            r = low - 1;
        }
    }
}
