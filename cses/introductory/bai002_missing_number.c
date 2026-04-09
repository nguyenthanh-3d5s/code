/*
Thời gian giới hạn: 1.00 giây
Bộ nhớ giới hạn: 512 MB

Bạn được cho tất cả các số từ 1, 2, ..., n ngoại trừ một số
Nhiệm vụ của bạn là tìm số còn thiếu

Đầu vào:
Dòng đầu tiên chứa số nguyên n
Dòng thứ hai chứa n - 1 số
Mỗi số là khác nhau và nằm trong khoảng từ 1 đến n (bao gồm cả 1 và n)

Đầu ra:
In ra số còn thiếu

Ràng buộc:
2 <= n <= 2.10^5

# Ví dụ

Đầu vào:
5
2 3 1 5

Đầu ra:
4
*/

#include <stdio.h>

void SWAP(int *, int *);
void PART(int arr[], int *low, int *high);
void SORT(int arr[], int l, int r);
int UPPER_BOUND(int [], int);

int main() {
    int n;
    scanf("%d", &n);
 
    int arr[n];
    arr[0] = 0;

    for(int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    SORT(arr, 1, n - 1);
    
    printf("%d", UPPER_BOUND(arr, n));
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

int UPPER_BOUND(int arr[], int n) {
    int l = 0;
    int r = n - 1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == m) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }

    return l;
}
