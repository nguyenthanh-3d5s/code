#include <stdio.h>
#include <stdbool.h>
#define ll long long

bool cmp(int *a, int *b) {
    return *a < *b;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int part(int arr_1_[], int l, int r) {
    int i = l;

    for(int j = l; j < r; j++) {
        if(cmp(&arr_1_[j], &arr_1_[r])) {

            swap(&arr_1_[i++], &arr_1_[j]);
        }
    }
    swap(&arr_1_[i], &arr_1_[r]);

    return i;
}

void sort(int arr_1_[], int l, int r) {
    if(l >= r) {
        return;
    }

    int m = part(arr_1_, l, r);
    sort(arr_1_, l, m - 1);
    sort(arr_1_, m + 1, r);
}

int main() {

    return 0;
}
