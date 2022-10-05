/*                        logic1.c
 *
 *   Synopsis  - Displays a table of values of some logical
 *               expressions. Gives examples of the effect of
 *               evaluating the logical expressions on embedded
 *               variable operations.
 *
 *   Objective - To illustrate syntax and evaluation of logical
 *               expressions.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int  i = 3,
          j = 0;

     printf( "Examples of the logical expressions\n" );
     printf( "-----------------------------------\n" );
                                                        /* Note 1 */
     printf( "    i && j          %d\n", i && j );
                                                        /* Note 2 */
     printf( "    i || j          %d\n", i || j );

                                                        /* Note 3 */
     printf( "      !i            %d\n", !i );
     printf( "      !j            %d\n", !j );
                                                        /* Note 4 */
     printf( "(i > 0) && (j < 7)  %d\n", (i > 0) && (j < 7) );
     printf( "(i < 0) || (j < 7)  %d\n", (i < 0) || (j < 7) );
     printf( "!(i > 5) || (j > 0) %d\n", !(i > 5) || (j > 0) );

     printf( "\nExamples of the effects on the variables\n" );
     printf( "----------------------------------------\n" );
     printf( "Initially,   \ti = %d,\tj = %d\n", i, j );

     printf( "i || ++j     %d,", i || ++j );            /* Note 5 */
     printf( "\ti = %d,\tj = %d\n", i, j );
     printf( "i && j++     %d,", i && j++ );            /* Note 6 */
     printf( "\ti = %d,\tj = %d\n", i, j );
     return 0;
}
