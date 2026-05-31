#include <stdio.h>
#define N 100

typedef struct {
    int arr[N];
    int rank[N];
    int size;
} DSU;

void CREATE(DSU *test, int n) {
    test->size = n;

    for(int i = 0; i < n; i++) {
        test->arr[i] = i;
        test->rank[i] = 0;
    }
}

int FIND(DSU *test, int i) {
    if(test->arr[i] == i) {
        return i;
    }

    test->arr[i] = FIND(test, test->arr[i]);

    return test->arr[i];
}

void UNION(DSU *test, int i, int j) {
    int irep = FIND(test, i);
    int jrep = FIND(test, j);

    if(irep == jrep) {
        return;
    }

    if(test->rank[irep] == test->rank[jrep]) {
        test->arr[irep] = jrep;
        test->rank[jrep]++;
    }
    else if(test->rank[irep] < test->rank[jrep]) {
        test->arr[irep] = jrep;
    }
    else {
        test->arr[jrep] = irep;
    }
}

int main() {
    DSU test;
    CREATE(&test, 5);

    UNION(&test, 3, 4);
    UNION(&test, 2, 3);
    UNION(&test, 1, 2);

    for(int i = 0; i < test.size; i++) {
        printf("%d ", test.arr[i]);
    }

    printf("\n");

    for(int i = 0; i < test.size; i++) {
        printf("%d ", test.rank[i]);
    }
    return 0;
}
