
#include <stdio.h>
int main(void)
{
    int i = 0;
    int j = 0;
    int k = 0;

    i = 3;
    j = 4;
    k = 5;
    printf("a is %d\t", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
    i = 7;
    j = 8;
    k = 9;
    printf("b is %d\t", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);
    i = 7;
    j = 8;
    k = 9;
    printf("c is %d\t", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);
    i = 1;
    j = 1;
    k = 1;
    printf("d is %d\t", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}


// a is 1  3 4 5
// b is 0  7 8 9
// c is 1  8 8 9
// d is 1  2 1 1