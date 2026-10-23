#include <stdio.h>

int main(void) {
    
    float amount = 0;
    float tax = 0.05f;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: %f", amount + amount * tax);

    return 0;
}
