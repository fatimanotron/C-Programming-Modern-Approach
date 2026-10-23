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
