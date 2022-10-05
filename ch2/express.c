/*                       express.c
 *
 *   Synopsis  - Assigns and outputs values of the variables 
 *               x and y.
 *
 *   Objective - Demonstrates expression statements and the 
 *               values of assignment statements.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int x = 1, y, z;

     printf("Value of x, %d\n", x);               /* Note 1 */
     printf("Value of 2*x + 5, %d\n", 2*x + 5);   /* Note 1 */
                                                  /* Note 2 */
     printf("Value of assignment to x, %d\n", x = 5);

                                                  /* Note 3 */
     printf("Value of assignment to y, %d\n", y = 2*x++ + 1);
     printf("x is %d and y is %d\n", x, y);

     z = y = 4*x + 5;                             /* Note 4 */
     printf("y is %d and z is %d.\n", y, z);
     return 0;
}
