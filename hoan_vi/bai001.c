#include <stdio.h>
#include <stdlib.h>

void SWAP(int *, int *);
void REVERSER(int [], int, int);
void NEXT_PER(int [], int);

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    NEXT_PER(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void SWAP(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void REVERSER(int arr[], int l, int r) {
    while (l < r) {
        SWAP(&arr[l], &arr[r]);
        l++;
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
