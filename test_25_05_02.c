#include <stdio.h>

void SWAP(int *, int *);
void PART(int [],  int *, int *);
void SORT(int [], int, int);
int ABS(int, int);

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    
    int arr_01[n];
    int arr_02[m];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr_01[i]);
    }

    for(int i = 0; i < m; i++) {
        scanf("%d", &arr_02[i]);
    }
    
    SORT(arr_01, 0, n - 1);
    SORT(arr_02, 0, m - 1);
    
    int cnt = 0;
    int i = n - 1;
    int j = m - 1;

    while(i != -1 && j != -1) {
        if(ABS(arr_01[i], arr_02[j]) <= k) {
            i--;
            j--;
            cnt++;
        }
        else {
            if(arr_01[i] > arr_02[j]) {
                i--;
            }
            else {
                j--;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}

void SWAP(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PART(int arr[], int *low, int *high) {
    int l = *low;
    int r = *high;
    int m = *low;

    int mid = l + (r - l) / 2;
    int val = arr[mid];

    while(m <= r) {
        if(arr[m] == val) {
            m++;
        }
        else if(arr[m] < val) {
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

void SORT(int arr[], int l, int r) {
    while(l < r) {
        int low = l;
        int high = r;
        PART(arr, &low, &high);

        if(low - l < r - high) {
            SORT(arr, l, low - 1);
            l = high + 1;
        }
        else {
            SORT(arr, high + 1, r);
            r = low - 1;
        }
    }
}

int ABS(int a, int b) {
    return (a > b) ? a - b : b - a;
}
