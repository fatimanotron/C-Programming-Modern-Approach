// The Project:
// Write a program that asks the user to enter a dollars-and-cents amount, then displays the
// amount with 5% tax added:
// Enter an amount: 100.00
// With tax added: $105.00

#include <stdio.h>

int main(void) {
    
    float amount = 0;
    float tax = 0.05f;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: %f", amount + amount * tax);

    return 0;
}
