#include <stdio.h>

void SWAP(int *, int *);
int PARTITION(int [], int, int);
void QUICK_SORT(int [], int, int);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    QUICK_SORT(arr, 0, n - 1);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void SWAP(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int PARTITION(int arr[], int l, int r) {
    int val = arr[r];
    int i = l;
    int j = l;

    while(j < r) {
        if(arr[j] < val) {
            SWAP(&arr[i], &arr[j]);
            i++;
        }
        j++;
    }

    SWAP(&arr[i], &arr[j]);
    return i;
}

void QUICK_SORT(int arr[], int l, int r) {
    if(l < r) {
        int m = PARTITION(arr, l, r);
        QUICK_SORT(arr, l, m - 1);
        QUICK_SORT(arr, m + 1, r);
    }
}
