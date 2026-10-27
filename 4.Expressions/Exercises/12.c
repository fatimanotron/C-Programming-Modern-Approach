#include <stdio.h>
int main(void)
{
    int i = 0;
    int j = 0;
    int k = 0;

    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j);
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i, j);

    return 0;
}

// 6 16
// 6 -7
// 6 23
// 6 15