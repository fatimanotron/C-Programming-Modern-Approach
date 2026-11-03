
#include <stdio.h>
int main(void)
{
    int i;
    int j = 5;

    printf("Enter a value: ");
    scanf("%d", &i);

    if (i < j)
    {
        printf("-1");
    }
    else if (i > j)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}

//we can solve problem this way but there's a fastest way we can write it:
//(i > j) - (i < j)
//not very readable but promise you it will work.