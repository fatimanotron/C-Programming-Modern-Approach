
#include <stdio.h>
int main(void)
{
    int i = 0;
    int j = 0;
    int k = 0;

    i = 10;
    j = 5;
    printf("a is %d\n", !i < j);
    i = 2;
    j = 1;
    printf("b is %d\n", !!i + !j);
    i = 5;
    j = 0;
    k = -5;
    printf("c is %d\n", i && j || k);
    i = 1;
    j = 2;
    k = 3;
    printf("d is %d\n", i < j || k);
    return 0;
}

// a is 1
// b is 1
// c is 1
// d is 1