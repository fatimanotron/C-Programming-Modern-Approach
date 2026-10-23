// The Exercise:
// In the dweight.c program (Section 2.4), which spaces are essential?

#include <stdio.h>
int main(void)
{
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);
 
  return 0;
}

// The Answer:
// in the book we read that we can put the whole program in one line exept the derivitive because it needs a line itself and the space between return and 0.


