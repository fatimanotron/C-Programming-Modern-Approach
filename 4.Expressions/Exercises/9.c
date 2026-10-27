// try to guess and then run the code to make sure.

#include <stdio.h>
int main(void)
{
  int i = 0;
  int j = 0;
  int k = 0;

  i = 7;
  j = 8;
  i *= j + 1;
  printf("a : %d %d\n", i, j);

  i = j = k = 1;
  i += j += k;
  printf("b : %d %d %d\n", i, j, k);

  i = 1;
  j = 2;
  k = 3;
  i -= j -= k;
  printf(" c : %d %d %d\n", i, j, k);

  i = 2;
  j = 1;
  k = 0;
  i *= j *= k;
  printf("d :%d %d %d\n", i, j, k);
  return 0;
}

// a: 63 8
// b: 3 2 1
// c: 2 -1 3
// d: 0 0 0