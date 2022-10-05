/*                      preceden.c
 *
 *   Synopsis  - Five variables of type int are declared.
 *               Arithmetic operations are performed and the 
 *               resulting values are displayed.
 *
 *   Objective - To illustrate the relative precedence of 
 *               arithmetic operations and to see how the meaning 
 *               can be changed by the addition of parentheses.
 */

#include <stdio.h>

int main(void)
{
     int a=4, b=2, c=3, d, e;

     d = a * -b + c;                                   /* Note 1 */
     e = a * -(b + c);
     printf("d is %d, e is %d,\n", d, e);

     d = a + b * c;                                    /* Note 2 */
     e = (a + b) * c;
     printf("d is %d, e is %d,\n", d, e);

     d = b % c + a;                                    /* Note 3 */
     e = b % (c + a);
     printf("d is %d, e is %d,\n", d, e);

     d = c - b / a * a;	                              /* Note 4 */
     e = (c - b) / (a * a);
     printf("d is %d, e is %d,\n", d, e);

     return 0;
}

