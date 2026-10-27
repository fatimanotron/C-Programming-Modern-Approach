#include <stdio.h>

int main(void)
{

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    printf("Enter a three-digit number: ");
    scanf("%1d", &n1);
    scanf("%1d", &n2);
    scanf("%1d", &n3);
    printf("The reversal is: %d%d%d\n", n3, n2, n1);

    return 0;
}