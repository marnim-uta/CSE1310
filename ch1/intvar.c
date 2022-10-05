/*                               intvar.c 
 *
 *   Synopsis  - Four variables of type int are declared and
 *               initialized. Their values are displayed with
 *               calls to printf().
 *
 *   Objective - Illustrates declaration of variables both with
 *               and without initializers, assignment statements
 *               and the use of printf() with conversion
 *               specifications in its control string to print
 *               the values of variables.
 */

#include <stdio.h>

int main(void)
{
     int first;                            /* Note 1 */
     int second = 2;                       /* Note 2 */
     int third,
     fourth = 4;                           /* Note 3 */

     first = 1;                            /* Note 4 */
     third = 3;
     printf("first is %d, ", 
     
     first);       /* Note 5 */
                                           /* Note 6 */
     printf("second is %d, third is %d, and fourth is %d.\n",
                                        second, third, fourth);
     return 0;
}
