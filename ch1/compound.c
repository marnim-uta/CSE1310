/*                         compound.c
 *
 *   Synopsis  - Uses compound assignment to change the value of
 *               an integer variable a and displays the changed
 *               value with printf().
 *
 *   Objective - Illustrates compound assignment in C with
 *               several different arithmetic operations.
 */

#include <stdio.h>

int main( void )
{
     int a = 0;

     a += 4;                                       /* Note 1 */
     printf("a is %d.\n", a);

     a *= 3;                                      /* Note 2 */
     printf("a is now %d.\n", a);

     a -= 4;                                      /* Note 3 */
     printf("a is now %d.\n", a);

     a /= 2;                                      /* Note 4 */
     printf("a is now %d.\n", a);

     a %= 5;                                      /* Note 5 */
     printf("a is now %d.\n", a);

     return 0;
}
