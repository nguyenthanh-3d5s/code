#include <stdio.h>
#include <stdbool.h>

typedef struct {int a; int b;} ii;
typedef int (*func_cmp)(ii, ii);

int cmp(ii x, ii y) {
    if (x.b != y.b) {
        return (x.b < y.b) ? -1 : 1;
    }
    if (x.a != y.a) {
        return (x.a < y.a) ? -1 : 1;
    }
    return 0;
}

void SWAP(ii *, ii *);
void PART(ii [], int *, int *, func_cmp);
void SORT(ii [], int, int, func_cmp);
int UPPER_BOUND(ii [], int, int);
int VLOOKDOWN(ii [], int, int);

int main() {
    int n;
    scanf("%d", &n);

    ii arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].a, &arr[i].b);
    }

    SORT(arr, 0, n - 1, cmp);

    int i = 0;
    int j = 0;
    int cnt = 1;

    while(1) {
        j = VLOOKDOWN(arr, n, arr[j].b + 1);

        if(j != -1) {
            j = UPPER_BOUND(arr, n, arr[j].b);

            if(arr[j].a >= arr[i].b) {
                cnt++;
                i = j;
            }
        }
        else {
            break;
        }
    }

    printf("%d", cnt);

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

int UPPER_BOUND(ii arr[], int n, int x) {
    int pos = -1;
    int l = 0;
    int r = n - 1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m].b == x) {
            pos = m;
            l = m + 1;
        }
        else if(arr[m].b < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }

    return pos;
}

int VLOOKDOWN(ii arr[], int n, int x) {
    int pos = -1;
    int l = 0;
    int r = n - 1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m].b >= x) {
            pos = m;
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    return pos;
}
