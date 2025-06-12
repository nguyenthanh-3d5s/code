#include <stdio.h>
#define ll long long

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int part(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l - 1;

    for(int j = l; j < r; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    i++;
    swap(&arr[i], &arr[r]);

    return i;
}

void sort(int arr[], int l, int r) {
    if(l < r) {
        int m = part(arr, l, r);
        sort(arr, l, m - 1);
        sort(arr, m + 1, r);
    }
}

int main() {

    return 0;
}
