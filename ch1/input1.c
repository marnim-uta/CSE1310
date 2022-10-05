/*                          input1.c 
 *
 *   Synopsis  - A variable of type int is declared. Its address 
 *               is printed. The program then prompts for and
 *               accepts input of an integer value. The input
 *               value is echoed to the terminal screen.
 *
 *   Objective - Illustrates input of an integer value with 
 *               scanf(). Shows the syntax for the address of 
 *               a variable.
 */

#include <stdio.h>

int main( void )
{
     int intvar;
     printf("The address of intvar is %p.\n", &intvar);   /* Notes 1 and 2 */

     printf("\nEnter an integer value: ");
     scanf("%d", &intvar);                                /* Note 3 */
     printf("The value you entered was %d.\n", intvar);
     return 0;
}
