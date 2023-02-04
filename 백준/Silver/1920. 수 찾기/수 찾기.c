#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0
#define ARR_MAX_SIZE    100000

int compare(const void *a, const void *b);
int isExist(int arr[], int arrSize, int key);

int main(void) {
    int setSize;
    scanf("%d", &setSize);
    
    int set[ARR_MAX_SIZE];
    for (int i = 0; i < setSize; i++)
        scanf("%d", &set[i]);
    qsort(set, setSize, sizeof(int), compare);
    
    int subsetSize;
    scanf("%d", &subsetSize);
    
    int subset[ARR_MAX_SIZE];
    for (int i = 0; i < subsetSize; i++)
        scanf("%d", &subset[i]);
    
    for (int i = 0; i < subsetSize; i++)
        printf("%d\n", isExist(set, setSize, subset[i]));
    
    return 0;
}

int compare(const void *a, const void *b) {
    int numA = *(int *)a;
    int numB = *(int *)b;
    if      (numA > numB)  return 1;
    else if (numA < numB)  return -1;
    else if (numA == numB) return 0;
    return 0;
}

int isExist(int arr[], int arrSize, int key) {
    int low = 0;
    int high = arrSize - 1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key == arr[mid])
            return TRUE;
        else if (key < arr[mid])
            high = mid - 1;
        else if (key > arr[mid])
            low = mid + 1;
    }
    return FALSE;
}
