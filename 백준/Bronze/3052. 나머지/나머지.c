#include <stdio.h>

#define NUM_ARR_MAX_SIZE    10
#define NULL_INT          -100

#define TRUE    1
#define FALSE   0

int main(void) {
    int numArr[NUM_ARR_MAX_SIZE];
    for (int i = 0; i < NUM_ARR_MAX_SIZE; i++) {
        scanf("%d", &numArr[i]);
        numArr[i] %= 42;
    }
    
    int remArr[NUM_ARR_MAX_SIZE];
    for (int i = 0; i < NUM_ARR_MAX_SIZE; i++)
        remArr[i] = NULL_INT;
    
    int isExist, count = 0;
    for (int i = 0; i < NUM_ARR_MAX_SIZE; i++) {
        isExist = FALSE;
        for (int j = 0; j < NUM_ARR_MAX_SIZE; j++)
            if (numArr[i] == remArr[j])
                isExist = TRUE;
        if (!isExist) {
            remArr[count] = numArr[i];
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
