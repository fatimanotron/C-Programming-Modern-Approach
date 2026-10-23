#include <stdio.h>

int main(void) {
    
   int amount = 0;

   printf("Enter a dollar amount: ");
   scanf("%d", &amount);

   int bill20 = 20;
   int bill10 = 10;
   int bill5= 5;
   int bill1 = 1;

   printf("$20 bills: %d\n", amount/bill20);
   amount = amount - ((amount/bill20) * bill20);
   printf("$10 bills: %d\n", amount/bill10);
   amount = amount - ((amount/bill10) * bill10);
   printf("$5 bills: %d\n", amount/bill5);
   amount = amount - ((amount/bill5) * bill5);
   printf("$1 bills: %d\n", amount/bill1);
   amount = amount - ((amount/bill1) * bill1);

    return 0;
}