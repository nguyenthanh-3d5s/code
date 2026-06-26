#include <stdio.h>

typedef struct {
    int val;
    int idx;
} Element;

int compare(const void *x, const void *y) {
    int valX = ((Element *)x)->val;
    int valY = ((Element *)y)->val;
    if (valX < valY) return -1;
    if (valX > valY) return 1;
    return 0;
}

int main() {
    int n, x;
    if (scanf("%d %d", &n, &x) != 2) return 0;

    Element arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i].val);
        arr[i].idx = i + 1;
    }

    qsort(arr, n, sizeof(Element), compare);

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int current_sum = arr[left].val + arr[right].val;

        if (current_sum == x) {
            printf("%d %d\n", arr[left].idx, arr[right].idx);
            return 0;
        } 
        else if (current_sum < x) {
            left++;
        } 
        else {
            right--;
        }
    }

    printf("IMPOSSIBLE\n");
    return 0;
}
