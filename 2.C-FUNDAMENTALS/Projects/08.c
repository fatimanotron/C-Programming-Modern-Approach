#include <stdio.h>

int main(void)
{

    float loan = 0;
    float rate = 0;
    float payment = 0;

    scanf("%f", &loan);
    scanf("%f", &rate);
    scanf("%f", &payment);

    float monthly_payment = rate / (100 * 12);

    loan = loan + (loan * monthly_payment);
    loan = loan - payment;
    printf("Balance remaining after first payment: %.2f\n", loan);

    loan = loan + (loan * monthly_payment);
    loan = loan - payment;
    printf("Balance remaining after second payment: %.2f\n", loan);

    loan = loan + (loan * monthly_payment);
    loan = loan - payment;
    printf("Balance remaining after third payment: %.2f\n", loan);

    return 0;
}