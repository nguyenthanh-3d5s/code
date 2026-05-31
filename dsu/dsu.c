#include <stdio.h>
#define N 100

typedef struct {
    int arr[N];
    int size;
} DSU;

void CREATE(DSU *test, int n) {
    test->size = n;

    for(int i = 0; i < n; i++) {
        test->arr[i] = i;
    }
}

int FIND(DSU *test, int i) {
    if(test->arr[i] == i) {
        return i;
    }

    return FIND(test, test->arr[i]);
}

void PUSH_BACK(DSU *test, int i, int j) {
    int irep = FIND(test, i);
    int jrep = FIND(test, j);
    test->arr[irep] = jrep;
}

int main() {
    DSU test;
    CREATE(&test, 5);

    PUSH_BACK(&test, 1, 2);
    PUSH_BACK(&test, 3, 4);

    if(FIND(&test, 1) == FIND(&test, 2)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    if(FIND(&test, 1) == FIND(&test, 3)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
