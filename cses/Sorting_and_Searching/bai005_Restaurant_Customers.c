#include <stdio.h>

void SWAP(int *, int *);
void PART(int [], int [], int *, int *);
void SORT(int [], int [], int, int);

int main() {
    int n;
    scanf("%d", &n);

    n += n;
    
    int arr[n];
    int line[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(i % 2 == 0) {
            line[i] = 1;
        }
        else {
            line[i] = -1;
        }
    }
    
    SORT(arr, line, 0, n - 1);

    int cnt = 0;
    int max = 0;
    
    for(int i = 0; i < n; i++) {
        cnt += line[i];

        if(max < cnt) {
            max = cnt;
        }
    }

    printf("%d", max);

    return 0;
}

void SWAP(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PART(int arr[], int line[], int *low, int *high) {
    int l = *low;
    int r = *high;
    int m = *low;

    int val = arr[l] + (arr[r] - arr[l]) / 2;

    while(m <= r) {
        if(arr[m] == val) {
            m++;
        }
        else if(arr[m] < val) {
            SWAP(&arr[l], &arr[m]);
            SWAP(&line[l], &line[m]);
            l++;
            m++;
        }
        else {
            SWAP(&arr[m], &arr[r]);
            SWAP(&line[m], &line[r]);
            r--;
        }
    }

    *low = l;
    *high = r;
}

void SORT(int arr[], int line[], int l, int r) {
    while(l < r) {
        int low = l;
        int high = r;
        PART(arr, line, &low, &high);

        if(low - l < r - high) {
            SORT(arr, line, l, low - 1);
            l = high + 1;
        }
        else {
            SORT(arr, line, high + 1, r);
            r = low - 1;
        }
    }
}
