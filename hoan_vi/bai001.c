#include <stdio.h>
#include <string.h>
#define n 100

void SWAP(char *, char *);
void REVERSER(char [], int, int);
void NEXT_PER(char [], int);

int main() {
    char note[n];
    scanf("%s", note);
    int len = strlen(note);

    NEXT_PER(note, len);

    printf("%s\n", note);

    return 0;
}

void SWAP(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void REVERSER(char note[], int l, int r) {
    while (l < r) {
        SWAP(&note[l], &note[r]);
        l++;
        r--;
    }
}

void NEXT_PER(char note[], int len) {
    int pos = -1;
    for (int i = len - 2; i >= 0; i--) {
        if (note[i] < note[i + 1]) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        REVERSER(note, 0, len - 1);
        return;
    }

    for (int i = len - 1; i > pos; i--) {
        if (note[i] > note[pos]) {
            SWAP(&note[i], &note[pos]);
            break;
        }
    }

    REVERSER(note, pos + 1, len - 1);
}        l++;
        r--;
    }
}

void NEXT_PER(int arr[], int n) {
    int pos = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        REVERSER(arr, 0, n - 1);
        return;
    }

    for (int i = n - 1; i > pos; i--) {
        if (arr[i] > arr[pos]) {
            SWAP(&arr[i], &arr[pos]);
            break;
        }
    }

    REVERSER(arr, pos + 1, n - 1);
}
