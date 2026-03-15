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
    int m = l + (r - l) / 2;
    SWAP(&arr[m], &arr[r]);
    int i = l;
    int j = l;

    while(j < r) {
        if(arr[j] < arr[r]) {
            SWAP(&arr[i], &arr[j]);
            i++;
        }
        j++;
    }

    SWAP(&arr[i], &arr[j]);
    return i;
}

void QUICK_SORT(int arr[], int l, int r) {
    while(l < r) {
        int m = PARTITION(arr, l, r);

        if(m - l < r - m) {
            QUICK_SORT(arr, l, m - 1);
            l = m + 1;
        }
        else {
            QUICK_SORT(arr, m + 1, r);
            r = m - 1;
        }
    }
}        j++;
    }

    SWAP(&arr[i], &arr[j]);
    return i;
}

void QUICK_SORT(int arr[], int l, int r) {
    while(l < r) {
        int m = PARTITION(arr, l, r);
        
        if(m - l < r - m) {
            QUICK_SORT(arr, l, m - 1);
            l = m + 1;
        }
        else {
            QUICK_SORT(arr, m + 1, r);
            r = m - 1;
        }
    }
}
