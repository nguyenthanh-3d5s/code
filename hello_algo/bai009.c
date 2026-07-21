#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *randomNumbers(int);
int findOne(int *, int);

int main() {
    srand(time(NULL));
    
    int n = 5;
    int *nums = randomNumbers(n);
    
    printf("%d", findOne(nums, n));
    
    free(nums);
    return 0;
}

int *randomNumbers(int n) {
    int *nums = malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++) {
        nums[i] = i + 1;
    }
    
    for(int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
    return nums;
}

int findOne(int *nums, int n) {
    for(int i = 0; i < n; i++) {
        if(nums[i] == 1) {
            return i;
        }
    }
    
    return -1;
}
