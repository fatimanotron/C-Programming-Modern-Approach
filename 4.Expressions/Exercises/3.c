#include <stdio.h>
int main(void)
{
printf("%d\n", 8/5);
printf("%d\n", -8/5);
printf("%d\n", 8/-5);
printf("%d\n", -8/-5);

  return 0;
}

//Answer: the point of this exercise is that C89 did not specify whether integer division involving negative numbers had to round toward zero or toward negative infinity when the division was not exact.