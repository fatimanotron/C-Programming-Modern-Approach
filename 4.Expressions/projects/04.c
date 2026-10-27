//The easier way is to convert it with printf 
// %05o, o says show n in octal

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    printf("In octal, your number is: %05o\n", n);
    return 0;
}