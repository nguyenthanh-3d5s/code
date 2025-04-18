#include <stdio.h>
#define ll long long
#define elif else if
#define endl printf("\n")
#define REP(i, n) for(int i = 1, _n = (n); i <= _n; i++)

int main() {
    int n;
    scanf("%d", &n);

    int dem = 1;

    REP(i, n) {
        REP(j, n) {
            printf("%d ", dem);
            dem++;
        }
        endl;
    }
    endl;

    REP(i, n) {
        int kt = i;

        REP(j, n) {
            printf("%d ", kt);
            kt++;
        }
        endl;
    }
    endl;

    REP(i, n) {
        REP(j, n) {
            if(j <= n - i) {
                printf("~");
            }
            else {
                printf("%d", i);
            }
        }
        endl;
    }
    endl;

    REP(i, n) {
        int kt = i;
        int kc = n - 1;

        REP(j, i) {
            printf("%d ", kt);
            kt += kc;
            kc--;
        }
        endl;
    }
    endl;

    return 0;
}
