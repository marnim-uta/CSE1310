/*                            arith.c
 *
 *   Synopsis  - Calculates arithmetic operations with variables 
 *               of type int and displays the resulting values 
 *               in decimal.
 *
 *   Objective - Demonstrates the operations +, -, *, /, and %
 *               on variables of type int.
 */

#include <stdio.h>

int main(void)
{
     int a, b, c, d;
     printf("Enter an integer: ");
     scanf("%d", &a);

     b = a + 4;                                    /* Note 1 */
     c = a - 3;                                    /* Note 2 */
     d = -a;                                       /* Note 3 */
     printf("b is %d,\nc is %d, and\nd is %d.\n\n", b, c, d);

     b = a * 3;                                    /* Note 4 */
     c = a / 3;                                    /* Note 5 */
     d = a % 3;                                    /* Note 6 */
     printf("Now\nb is %d,\nc is %d, and\nd is %d.\n", 
                                                  b, c, d);
     return 0;
}
