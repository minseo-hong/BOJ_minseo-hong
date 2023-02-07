#include <stdio.h>

#define STAIR_MAX_SIZE   400
#define TRUE             1
#define FALSE            0

int stairMaxScore(int stair[], int stairSize);
int max(int first, int second);

int main(void) {
    int stairSize;
    scanf("%d", &stairSize);
    
    int stair[STAIR_MAX_SIZE];
    stair[0] = 0;
    for (int i = 1; i <= stairSize; i++)
        scanf("%d", &stair[i]);
    
    printf("%d\n", stairMaxScore(stair, stairSize));
    
    return 0;
}

int stairMaxScore(int stair[], int stairSize) {
    int stairMaxScore[STAIR_MAX_SIZE];
    stairMaxScore[0] = stair[0];
    stairMaxScore[1] = stair[1];
    stairMaxScore[2] = stair[1] + stair[2];
    stairMaxScore[3] = max(stair[1], stair[2]) + stair[3];
    for (int n = 4; n <= stairSize; n++)
        stairMaxScore[n] = max(stairMaxScore[n - 3] + stair[n - 1] + stair[n],
                               stairMaxScore[n - 2] + stair[n]);
    return stairMaxScore[stairSize];
}

int max(int first, int second) {
    return (first > second ? first : second);
}
