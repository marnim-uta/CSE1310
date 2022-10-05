/*                               incremen.c
 *
 *   Synopsis  - Assigns values to b using the increment and
 *               decrement by 1 operators with a. Displays 
 *               values of a and b.
 *
 *   Objective - To demonstrate the increment and decrement by
 *               1 operators.
 */

#include <stdio.h>

int main( void )
{
     int a = 3, b;

     b = a++;                                      /* Note 1 */
     printf("b is %d, and a is %d.\n", b, a);

     b = ++a;                                      /* Note 2 */
     printf("Now b is %d, and a is %d.\n", b, a);

     b = 5 % --a;                                  /* Note 3 */
     printf("Now b is %d, and a is %d.\n", b, a);
                                                   /* Note 4 */
     printf("Now b is %d, and a is %d.\n", ++b, a--);
     printf("Now b is %d, and a is %d.\n", b, a);
     return 0;
}  