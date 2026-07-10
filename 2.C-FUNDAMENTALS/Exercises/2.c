/*
 * the Question:
 * Consider the following program:
 #include <stdio.h>
 int main(void)
 {
 printf("Parkinson's Law:\nWork expands so as to ");
 printf("fill the time\n");
 printf("available for its completion.\n");
 return 0;
 }
 (a) Identify the directives and statements in this program.
 (b) What output does the program produce?
 */

/*
 * The answer:
 * a- directives are whatever that starts with a # in program.
 * and for the second part, each statement in c ends up with a semicollon (;)
 * so line 7 to 10 are statements.
 *
 * b- to see what it returns we can run the program, or just saying it by looking at it.
 * this is the output:
 * Parkinson's Law:
 * Work expands so as to fill the time
 * available for its completion.
 */

#include <stdio.h>
int main(void)
{
printf("Parkinson's Law:\nWork expands so as to ");
printf("fill the time\n");
printf("available for its completion.\n");
return 0;
}
