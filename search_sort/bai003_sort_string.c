#include <stdio.h>
#include <string.h>

void SWAP(char *, char *);
void PART(char [], int *, int *);
void SORT(char [], int, int);

int main() {
    char str[100];
    scanf("%s", str);
    int n = strlen(str);

    SORT(str, 0, n - 1);

    printf("%s\n", str);

    return 0;
}

void SWAP(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void PART(char arr[], int *low, int *high) {
    int l = *low;
    int r = *high;
    int m = *low;

    int mid = l + (r - l) / 2;
    char val = arr[mid];

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

void SORT(char arr[], int l, int r) {
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
