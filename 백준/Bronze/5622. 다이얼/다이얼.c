#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIAL_STR_MAX_SIZE   20

int main(void) {
    char dialStr[DIAL_STR_MAX_SIZE];
    scanf("%s", dialStr);
    
    int totalDialTime = 0, dialTime;
    for (int i = 0; i < strlen(dialStr); i++) {
        dialTime = 3;
        for (int j = 'A'; j <= 'O'; j += 3) {
            if (dialStr[i] >= j && dialStr[i] <= j + 2)
                break;
            dialTime++;
        }
        if (dialStr[i] >= 'P' && dialStr[i] <= 'S')
            dialTime = 8;
        else if (dialStr[i] >= 'S' && dialStr[i] <= 'V')
            dialTime = 9;
        else if (dialStr[i] >= 'W' && dialStr[i] <= 'Z')
            dialTime = 10;
        totalDialTime += dialTime;
    }
    
    printf("%d\n", totalDialTime);
    
    return 0;
}
