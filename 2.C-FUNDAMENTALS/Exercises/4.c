/*
 * the Question:
 * Write a program that declares several int and float variables—without initializing
 * them—and then prints their values. Is there any pattern to the values? (Usually there isn’t.)
 */

#include <stdio.h>

int main(void){
    int a, b;
    float c, d;

    printf("a is %d\nb is %d\nc is %f\nd is %f", a, b, c, d);
    return 0;
}

/*
 * Answer: In my case, two int variables and one float variable were 0,
 * while the other float variable had a very large value.
 *
 * ./4.out
 * a is 0
 * b is 0
 * c is 490549760.000000
 * d is 0.000000
 *
 * The purpose of this exercise is to demonstrate
 * the importance of initializing variables when they are defined.
 */
