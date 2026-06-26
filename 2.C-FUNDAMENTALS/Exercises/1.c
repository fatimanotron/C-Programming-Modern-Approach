/*
 * the question:
 *  Create and run Kernighan and Ritchie’s famous “hello, world” program:
 *  #include <stdio.h>
 *  int main(void)
 *  {
 *  printf("hello, world\n");
 *  }
 *  Do you get a warning message from the compiler? If so, what’s needed to make it go away?
 */

#include <stdio.h>
int main(void)
{
printf("hello, world\n");
return 0;
}

// not fair! i don't get a warning message.
// and it is because of my compiler.
// i compiled it. with even strict flags, but still no message.
// but the point of this exercise is that you should use a
// return 0;
// at the end of the main function.
