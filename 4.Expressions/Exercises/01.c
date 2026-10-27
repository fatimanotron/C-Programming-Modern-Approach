
#include <stdio.h>
int main(void)
{
  int i = 1;
  int j = 2;
  int k = 3;
  printf("%d", (i + 5) % (j + 2) / k);
  return 0;
}

// Answer:
// (a). 1 2
// (b). 0
// (c). 1
// (d). 0
// you can try it out like me to make sure.