
#include <stdio.h>
int main(void)
{
    int i = -17;
    printf("%d\n", i >= 0 ? i : -i);

    return 0;
}

// i = 17 will print 17
// i = -17 will also be 17
// don't be confused that what happens:
// -i = -(-17) = +17
