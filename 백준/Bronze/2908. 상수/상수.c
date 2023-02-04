#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STR_MAX_SIZE    10

int convertToInt(char *numStr);
void swapFirstAndLastNum(char *numStr);

int main(void) {
    char strNumA[NUM_STR_MAX_SIZE], strNumB[NUM_STR_MAX_SIZE];
    int changedNumA, changedNumB;
    
    scanf("%s %s", strNumA, strNumB);
    
    swapFirstAndLastNum(strNumA);
    swapFirstAndLastNum(strNumB);
    
    changedNumA = atoi(strNumA);
    changedNumB = atoi(strNumB);

    if (changedNumA > changedNumB) {
        printf("%d\n", changedNumA);
    } else {
        printf("%d\n", changedNumB);
    }
    
    return 0;
}

void swapFirstAndLastNum(char *numStr) {
    char tmpChar = numStr[0];
    numStr[0] = numStr[2];
    numStr[2] = tmpChar;
}
