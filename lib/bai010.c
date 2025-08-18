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
    hs arr_1_[5];
    for(int i = 0; i < 5; i++) {
        
    }
    return 0;
}
