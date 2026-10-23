#include <stdio.h>

int main(void) {
    
   int x = 0;

   printf("Enter x: ");
   scanf("%d", &x);

   int value = ((((3*x + 2)*x - 5) * x - 1) * x + 7) * x - 6;

   printf("Value is: %d", value);
    return 0;
}