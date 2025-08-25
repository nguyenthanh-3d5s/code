#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define ll long long
#define n_1 1000
#define n_2 1000

typedef struct {
    char ten[30];
    char lop[15];
    char ma_hs[15];
    int ngay, thang, nam;
} hs;

hs arr_1_[n_1];
bool arr_2_[n_2];

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

void in_put(int cnt_1) {
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

void out_put(int i) {
    printf("%-30s", arr_1_[i].ten);

    printf("%02d\\%02d\\%-10d", arr_1_[i].ngay, arr_1_[i].thang, arr_1_[i].nam);

    printf("%-15s", arr_1_[i].lop);

    printf("%s\n", arr_1_[i].ma_hs);
}

void out_class(int cnt_1) {
    for(int i = 0; i < cnt_1; i++) {
        arr_2_[i] = 1;
    }

    for(int i = 0; i < cnt_1 - 1; i++) {
        if(arr_2_[i]) {
            out_put(i);
            
            for(int j = i + 1; j < cnt_1; j++) {
                if(strcmp(arr_1_[i].lop ,arr_1_[j].lop) == 0) {
                    out_put(j);
                    arr_2_[j] = 0;
                }
            }
        }
    }
}

int main() {
    int cnt_1;

    scanf("%d", &cnt_1);
    cache_sf();

    in_put(cnt_1);
    out_class(cnt_1);
    
    return 0;
}
