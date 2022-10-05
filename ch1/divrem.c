/*					divrem.c
 *
 *   Synopsis  - Prompts for and accepts input of two integer
 *               values and displays the results of a quotient
 *               and a remainder operation.
 *
 *   Objective - Illustrates the abs() function and one method
 *               of ensuring that the results of these operations
 *               will be the same on different computer systems.
 */

/* Include Files */
#include <stdio.h>
#include <stdlib.h>                          /* Note 1 */

int main( void )
{
     int a, b;

     printf("Enter a positive and a negative integer. ");
     printf("\nSeparate with a space: ");
     scanf("%d %d", &a, &b);

                                             /* Note 2 */
     printf("The value of a / b is %d\n",
                                    -(abs(a) / abs(b)));

     printf("The value of a %% b is %d\n",   /* Note 3 */
                                    -(abs(a) % abs(b)));
     return 0;
}
