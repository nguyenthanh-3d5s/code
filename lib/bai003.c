#include <stdio.h>
#include <stdbool.h>
#define ll long long

typedef bool (*cmp_f)(int *, int *);

typedef struct {
    int x;
    int y;
}ii;

bool cmp_i(int *a, int *b) {
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

void swap_ii(ii *a, ii *b) {
    ii tmp = *a;
    *a = *b;
    *b = tmp;
}

int part(int arr[], int l, int r, cmp_f cmp) {
    int pivot = arr[r];
    int i = l - 1;

    for(int j = l; j < r; j++) {
        if(cmp(&arr[j], &pivot)) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    i++;
    swap(&arr[i], &arr[r]);

    return i;
}

void sort(int arr[], int l, int r, cmp_f cmp) {
    if(l < r) {
        int m = part(arr, l, r, cmp);
        sort(arr, l, m - 1, cmp);
        sort(arr, m + 1, r, cmp);
    }
}

int main() {

    return 0;
}
