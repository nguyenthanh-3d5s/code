#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Hàm hợp nhất cho Merge Sort (dùng cho cả tăng dần và giảm dần)
void merge(vi &arr, int left, int mid, int right, bool (*cmp)(int, int)) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    vi leftArr(n1), rightArr(n2);
    
    for (int i = 0; i < n1; i++) leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++) rightArr[i] = arr[mid + 1 + i];
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (cmp(leftArr[i], rightArr[j])) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Hàm sắp xếp trộn (Merge Sort) chung
void mergeSort(vi &arr, int left, int right, bool (*cmp)(int, int)) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid, cmp); // Sắp xếp phần bên trái
        mergeSort(arr, mid + 1, right, cmp); // Sắp xếp phần bên phải

        merge(arr, left, mid, right, cmp); // Hợp nhất hai phần đã sắp xếp
    }
}

// Hàm so sánh tăng dần
bool cmp_tang(int a, int b) {
    return a < b;
}

// Hàm so sánh giảm dần
bool cmp_giam(int a, int b) {
    return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vi arr = {5, 1, 3, 4, 2};

    // Sắp xếp tăng dần
    mergeSort(arr, 0, arr.size() - 1, cmp_tang);
    cout << "Sắp xếp tăng dần: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Sắp xếp giảm dần
    mergeSort(arr, 0, arr.size() - 1, cmp_giam);
    cout << "Sắp xếp giảm dần: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
