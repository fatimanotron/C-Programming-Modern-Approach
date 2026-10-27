#include <stdio.h>

int main(void)
{

    int x = 0;

    printf("Enter x: ");
    scanf("%d", &x);

    int value = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + (7 * x) - 6;

    printf("Value is: %d", value);
    return 0;
}
