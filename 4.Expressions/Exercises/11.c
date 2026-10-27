#include <stdio.h>
int main(void)
{
    int i = 0;
    int j = 0;
    int k = 0;

    i = 1;
    printf("%d \n", i++ - 1);
    printf("%d\n", i);
    i = 10;
    j = 5;
    printf("%d \n", i++ - ++j);
    printf("%d %d\n", i, j);
    i = 7;
    j = 8;
    printf("%d \n", i++ - --j);
    printf("%d %d\n", i, j);
    i = 3;
    j = 4;
    k = 5;
    printf("%d \n", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}

// 0 
// 2
// 4
// 11 6
// 0
// 8 7
// 3 
// 4 5 4


