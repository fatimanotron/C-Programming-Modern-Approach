
#include <stdio.h>
int main(void)
{
    int i = 2;
    int j = 3;
    int k = 0;
    k = i * j == 6;
    printf("a is %d\n", k);

    i = 5;
    j = 10;
    k = 1;
    printf("b is %d\n", k > i < j);

    i = 3;
    j = 2;
    k = 1;
    printf("c is %d\n", i < j == j < k);

    i = 3;
    j = 4;
    k = 5;
    printf("d is %d\n", i % j + i < k);
    return 0;
}


// a is 1
// b is 1
// c is 1
// d is 0