#include <stdio.h>
#include <stdlib.h>

// Khai báo mảng toàn cục (Global) để tránh lỗi tràn bộ nhớ Stack với n = 200000
int arr[200005];

// Hàm so sánh tăng dần bắt buộc cho qsort
int compare(const void *a, const void *b) {
    int val1 = *(const int*)a;
    int val2 = *(const int*)b;
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sử dụng qsort của thư viện giúp đạt độ phức tạp chuẩn O(n log n) trong mọi trường hợp
    qsort(arr, n, sizeof(int), compare);

    int i = 0;
    int j = n - 1;

    // Giữ nguyên logic Hai con trỏ tối ưu của bạn
    while(i <= j) {
        if(arr[i] + arr[j] <= k) {
            i++;
        }
        j--;
    }

    // Công thức tính số gondola cực kỳ ngắn gọn của bạn
    printf("%d\n", n - 1 - j);

    return 0;
}
