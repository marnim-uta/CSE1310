/*               exrcse1.c
 *
 *   Synopsis  - Prints out values for several
 *               expressions involving combinations
 *               of relational operators.
 *
 *   Objective - To give practice with precedence
 *               of the relational expressions.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int x = 4, y = 2;

     printf( "3<x<y has value %d.\n", 3<x<y );
     printf( "x<3<y has value %d.\n", x<3<y );
     printf( "3<x<1 has value %d.\n", 3<x<1 );
     printf( "3<x<2 has value %d.\n", 3<x<2 );
     printf( "3<(x=y) has value %d.\n", 3<(x=y) );
     printf( "y=x<4 has value %d.\n", y=x<4 );
     return 0;
} 
