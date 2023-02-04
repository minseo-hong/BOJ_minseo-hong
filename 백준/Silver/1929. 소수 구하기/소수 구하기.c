#include <stdio.h>

#define TRUE            1
#define FALSE           0
#define MAX_NUM_SIZE    1000000

int* createIsPrimeNum(void);

int main(void) {
    int minNum, maxNum;
    scanf("%d %d", &minNum, &maxNum);
    
    int *isPrimeNum = createIsPrimeNum();
    for (int num = minNum; num <= maxNum; num++)
        if (isPrimeNum[num])
            printf("%d\n", num);
    
    return 0;
}

int* createIsPrimeNum(void) {
    static int result[MAX_NUM_SIZE + 1];
    for (int i = 0; i <= MAX_NUM_SIZE; i++)
        if (i == 0 || i == 1)
            result[i] = FALSE;
        else
            result[i] = TRUE;
    for (int i = 2; i * i <= MAX_NUM_SIZE; i++)
        if (result[i])
            for (int j = i * i; j <= MAX_NUM_SIZE; j += i)
                result[j] = FALSE;
    return result;
}
