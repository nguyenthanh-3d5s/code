#include <stdio.h>
#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1)
#define SET_ON(x, i) ((x) | MASK(i))
#define SET_OFF(x, i) ((x) & ~MASK(i))
#define GRAY(i) ((i) ^ ((i) >> 1))

int main() {
    
    return 0;
}
