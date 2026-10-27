#include <stdio.h>
int main(void)
{
  int n1 = 0;
  int n2 = 0;
  int n3 = 0;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &n1, &n2, &n3);
  printf("You entered %d.%d.%d\n", n1, n2, n3);

  return 0;
}