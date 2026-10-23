// The project:
// Write a program that computes the volume of a sphere with a 10-meter radius, using the for
// mula v = 4/3πr3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What hap
// pens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself
// twice to compute r3

#include <stdio.h>

int main(void) {

   float r = 10; 
   float p = 3.14f ;
   float g = 4.0f/3.0f;
   float volume = g * p * (r * r * r);


    printf("Sphere volume: %.2f cubic meters\n", volume);
    return 0;
}

//we multiply r three times because we don't have exponents here.
