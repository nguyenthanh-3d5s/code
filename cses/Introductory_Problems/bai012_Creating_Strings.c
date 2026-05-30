#include <stdio.h>
#include <string.h>
#define n 100

void SWAP(char *, char *);
void PART(char [], int *, int *);
void SORT(char [], int, int);
void REVERSER(char [], int, int);
void NEXT_PER(char [], int, int);

int main() {
    char note[n];
    scanf("%s", note);
    int len = strlen(note);

    SORT(note, 0, len - 1);

    char sub[n];

    strcpy(sub, note);
    NEXT_PER(sub, len, 0);

    strcpy(sub, note);
    NEXT_PER(sub, len, 1);

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

void REVERSER(char note[], int l, int r) {
    while (l < r) {
        SWAP(&note[l], &note[r]);
        l++;
        r--;
    }
}

void NEXT_PER(char note[], int len, int flag) {
    int cnt = 0;

    while(1) {
        if(flag) {
            printf("%s\n", note);
        }
        else {
            cnt++;
        }

        int pos = -1;

        for (int i = len - 2; i >= 0; i--) {
            if (note[i] < note[i + 1]) {
                pos = i;
                break;
            }
        }

        if (pos == -1) {
            if(!flag) {
                printf("%d\n", cnt);
            }

            return;
        }

        for (int i = len - 1; i > pos; i--) {
            if (note[i] > note[pos]) {
                SWAP(&note[i], &note[pos]);
                break;
            }
        }

        REVERSER(note, pos + 1, len - 1);
    }
}
