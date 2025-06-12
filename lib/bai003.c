#include <stdio.h>
#include <stdbool.h>
#define ll long long

typedef struct {
    int x;
    int y;
}ii;

bool cmp(int *a, int *b) {
    return *a < *b;
}

bool cmp_ii(ii *a, ii *b) {
    return a->x < b->x;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int part(int arr[], int l, int r, bool (*cmp_func)(int *, int *)) {
    int pivot = arr[r];
    int i = l - 1;

    for(int j = l; j < r; j++) {
        if(cmp_func(&arr[j], &pivot)) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    i++;
    swap(&arr[i], &arr[r]);

    return i;
}

void sort(int arr[], int l, int r, bool (*cmp_func)(int *, int *)) {
    if(l < r) {
        int m = part(arr, l, r, cmp_func);
        sort(arr, l, m - 1, cmp_func);
        sort(arr, m + 1, r, cmp_func);
    }
}

int main() {

    return 0;
}
