#include <stdio.h>

#define SEQ_MAX_SIZE    1500000

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
    for (int smNum = 1; smNum < pairSum; smNum++) {
        if (!selected[smNum]) continue;
        if (completed[smNum]) break;
        for (int bgNum = pairSum - 1; bgNum >= 1; bgNum--) {
            if (!selected[bgNum]) continue;
            if (smNum == bgNum)   continue;
            if (smNum + bgNum == pairSum) {
                pairCount += 1;
                completed[smNum] = smNum;
                completed[bgNum] = bgNum;
                break;
            }
        }
    }
    
    printf("%d\n", pairCount);
    
    return 0;
}
