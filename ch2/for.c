/*                  for.c
 *
 *   Synopsis  - Three for loops. The first for loop counts by
 *               1; the second for loop counts by 2; the third
 *               for loop calculates a factorial.
 *   Objective - To illustrate the syntax and the flexibility
 *               of the for loop.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define LAST 7

int main( void )
{
     int count,
         factorial;

     printf( "Counting.\n" );
     for ( count = 1; count < LAST; count++ )                           /* Note 1 */
          printf( "%d\n", count );

     printf( "\nCounting by two.\n" );
     for ( count = 0; count < 2*LAST; )                          /* Notes 2 and 3 */
          printf( "%d\n", count += 2 );                                 /* Note 4 */

     printf( "\nCalculating factorials.\n" );
     for ( factorial = 1, count = 1; count <= 7; factorial *= count++ ) /* Note 5 */
     ;                                                                  /* Note 6 */
     printf( "%d! is %d.\n", LAST, factorial );
     return 0;
}
