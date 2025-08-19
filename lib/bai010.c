#include <stdio.h>
#include <string.h>
#define ll long long

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

int main() {
    hs arr_1_[1000];
    int n_1;

    scanf("%d", &n_1);
    cache_sf();

    for(int i = 0; i < n_1; i++) {
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

    for(int i = 0; i < n_1; i++) {
        printf("%-30s", arr_1_[i].ten);

        printf("%02d\\%02d\\%-15d", arr_1_[i].ngay, arr_1_[i].thang, arr_1_[i].nam);

        printf("%-15s", arr_1_[i].lop);

        printf("%s\n", arr_1_[i].ma_hs);
    }

    return 0;
}
