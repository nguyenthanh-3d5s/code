#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define ll long long
#define n_1 1000

typedef struct {
    char ten[30];
    char lop[15];
    char ma_hs[15];
    int ngay, thang, nam;
} hs;

void cache_sf() {
    while(getchar() != '\n') {}
}

void cache_fs(char str[]) {
    if(str[strlen(str) - 1] != '\n') {
        cache_sf();
    }
    else {
        str[strlen(str) - 1] = '\0';
    }
}

void in_put(hs arr_1_[], int cnt_1) {
    for(int i = 0; i < cnt_1; i++) {
        fgets(arr_1_[i].ten, sizeof(arr_1_[i].ten), stdin);
        cache_fs(arr_1_[i].ten);

        scanf("%d", &arr_1_[i].ngay);
        scanf("%d", &arr_1_[i].thang);
        scanf("%d", &arr_1_[i].nam);
        cache_sf();

        fgets(arr_1_[i].lop, sizeof(arr_1_[i].lop), stdin);
        cache_fs(arr_1_[i].lop);

        fgets(arr_1_[i].ma_hs, sizeof(arr_1_[i].ma_hs), stdin);
        cache_fs(arr_1_[i].ma_hs);
    }
}

void out_put(hs arr_1_[], int cnt_1) {
    for(int i = 0; i < cnt_1; i++) {
        printf("%-30s", arr_1_[i].ten);

        printf("%02d\\%02d\\%-10d", arr_1_[i].ngay, arr_1_[i].thang, arr_1_[i].nam);

        printf("%-15s", arr_1_[i].lop);

        printf("%s\n", arr_1_[i].ma_hs);
    }
}

bool cmp(hs *a, hs *b) {
    return strcmp(a->lop, b->lop) < 0;
}

void swap(hs *a, hs *b) {
    hs tmp = *a;
    *a = *b;
    *b = tmp;
}

int part(hs arr_1_[], int l, int r) {
    int i = l;

    for(int j = l; j < r; j++) {
        if(cmp(&arr_1_[j], &arr_1_[r])) {

            swap(&arr_1_[i++], &arr_1_[j]);
        }
    }
    swap(&arr_1_[i], &arr_1_[r]);

    return i;
}

void sort(hs arr_1_[], int l, int r) {
    if(l >= r) {
        return;
    }

    int m = part(arr_1_, l, r);
    sort(arr_1_, l, m - 1);
    sort(arr_1_, m + 1, r);
}

int main() {
    hs arr_1_[n_1];
    int cnt_1;

    scanf("%d", &cnt_1);
    cache_sf();

    in_put(arr_1_, cnt_1);
    sort(arr_1_, 0, cnt_1 - 1);
    out_put(arr_1_, cnt_1);

    return 0;
}
