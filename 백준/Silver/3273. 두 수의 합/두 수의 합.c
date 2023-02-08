#include <stdio.h>

#define SEQ_MAX_SIZE    1500000
#define INPUT_NUMS_MAX_COUNT

int main(void) {
    int seqSize;
    scanf("%d", &seqSize);

    int selected[SEQ_MAX_SIZE], inputNum;
    for (int i = 0; i < seqSize; i++) {
        scanf("%d", &inputNum);
        selected[inputNum] = inputNum;
    }
    
    int pairSum;
    scanf("%d", &pairSum);
    
    int completed[SEQ_MAX_SIZE], pairCount = 0;
    for (int i = 1; i < pairSum; i++) {
        if (!selected[i]) {
            continue;
        }
        if (completed[i]) {
            break;
        }
        for (int j = pairSum - 1; j >= 1; j--) {
            if (!selected[j]) {
                continue;
            }
            if (i == j) {
                continue;
            }
            if (i + j == pairSum) {
                pairCount += 1;
                completed[i] = i;
                completed[j] = j;
                break;
            }
        }
    }
    
    printf("%d\n", pairCount);
    
    return 0;
}
