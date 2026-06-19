#include <stdio.h>
#include <stdbool.h>

typedef struct {int a; int b;} ii;
typedef int (*func_cmp)(ii, ii);

int cmp(ii x, ii y) {
    if (x.a != y.a) {
        return (x.a < y.a) ? -1 : 1;
    }
    return 0;
}

void SWAP(ii *, ii *);
void PART(ii [], int *, int *, func_cmp);
void SORT(ii [], int, int, func_cmp);

int main() {
    int n;
    scanf("%d", &n);

    n += n;

    ii arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i].a);

        if(i % 2 == 0) {
            arr[i].b = 1;
        }
        else {
            arr[i].b = -1;
        }
    }

    SORT(arr, 0, n - 1, cmp);

    int cnt = 0;
    int max = 0;

    for(int i = 0; i < n; i++) {
        cnt += arr[i].b;

        if(max < cnt) {
            max = cnt;
        }
    }

    printf("%d", max);

    return 0;
}

void SWAP(ii *x, ii *y) {
    ii temp = *x;
    *x = *y;
    *y = temp;
}

void PART(ii arr[], int *low, int *high, func_cmp compare) {
    int l = *low;
    int r = *high;
    int m = *low;

    ii val = arr[l + (r - l) / 2];

    while(m <= r) {
        int cmp_result = compare(arr[m], val);

        if(cmp_result == 0) {
            m++;
        }
        else if(cmp_result < 0) {
            SWAP(&arr[l], &arr[m]);
            l++;
            m++;
        }
        else {
            SWAP(&arr[m], &arr[r]);
            r--;
        }
    }

    *low = l;
    *high = r;
}

void SORT(ii arr[], int l, int r, func_cmp compare) {
    while(l < r) {
        int low = l;
        int high = r;
        PART(arr, &low, &high, compare);

        if(low - l < r - high) {
            SORT(arr, l, low - 1, compare);
            l = high + 1;
        }
        else {
            SORT(arr, high + 1, r, compare);
            r = low - 1;
        }
    }
}
