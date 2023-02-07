#include <stdio.h>

int main(void) {
    int totalPrice;
    scanf("%d", &totalPrice);
    
    int totalAmount;
    scanf("%d", &totalAmount);
    
    int productPrice, productAmount;
    for (int i = 0; i < totalAmount; i++) {
        scanf("%d %d", &productPrice, &productAmount);
        totalPrice -= productPrice * productAmount;
    }
    
    if (!totalPrice)
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}
