// The Project:
// Modify the program of Programming Project 2 so that it prompts the user to enter the radius
// of the sphere.

#include <stdio.h>

int main(void) {

   float r = 0; 
   float p = 3.14f ;
   float g = 4.0f/3.0f;

    scanf("%f", &r);

     float volume = g * p * (r * r * r);

    printf("Sphere volume: %.2f cubic meters\n", volume);
    return 0;
}
