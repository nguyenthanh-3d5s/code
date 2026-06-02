#include <stdio.h>

int FIND(int [], int);
void UNION(int [], int);
void SWAP(int *, int *);
void PART(int [],  int *, int *);
void SORT(int [], int, int);
int UPPER_BOUND(int [], int, int);
int LOWER_BOUND(int [], int, int);

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    n++;

    int dsu[n];
    int ticket[n];
    int custom[m];

    dsu[0] = 0;
    ticket[0] = 0;

    for(int i = 1; i < n; i++) {
        dsu[i] = i;
        scanf("%d", &ticket[i]);
    }

    for(int i = 0; i < m; i++) {
        scanf("%d", &custom[i]);
    }

    SORT(ticket, 1, n - 1);

    for(int i = 0; i < m; i++) {
        int j = LOWER_BOUND(ticket, n, custom[i]);
        int pos = UPPER_BOUND(ticket, n, ticket[j]);
        pos = FIND(dsu, pos);

        if(pos != 0) {
            UNION(dsu, pos);
            printf("%d\n", ticket[pos]);
        }
        else {
            printf("-1\n");
        }
    }
    return 0;
}

int FIND(int dsu[], int i) {
    if(dsu[i] == i) {
        return i;
    }

    return dsu[i] = FIND(dsu, dsu[i]);
}

void UNION(int dsu[], int i) {
    dsu[i]--;
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

    int val = arr[l] + (arr[r] - arr[l]) / 2;

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

int UPPER_BOUND(int arr[], int n, int x) {
    int pos = -1;
    int l = 0;
    int r = n - 1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            pos = m;
            l = m + 1;
        }
        else if(arr[m] < x) {
            l = m + 1;
            //pos = l;
        }
        else {
            r = m - 1;
        }
    }

    return (pos == n) ? r : pos;
}

int LOWER_BOUND(int arr[], int n, int x) {
    int pos = -1;
    int l = 0;
    int r = n - 1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            pos = m;
            r = m - 1;
        }
        else if(arr[m] > x) {
            r = m - 1;
            pos = r;
        }
        else {
            l = m + 1;
        }
    }

    return pos;
}
