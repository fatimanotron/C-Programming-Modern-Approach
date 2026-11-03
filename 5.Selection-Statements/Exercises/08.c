#include <stdbool.h>
#include <stdio.h>
int main(void)
{
    int age = 0;
    bool teenager;
    // (age >= 13 && age <= 19) ? teenager = true : teenager = false;
    teenager = (age >= 13 && age <= 19);
    return 0;
}