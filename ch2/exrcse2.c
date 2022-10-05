/*               exrcse2.c
 *
 *   Synopsis  - Tests relational expressions, and  
 *               produces appropriate messages. 
 *
 *   Objective - Provides practice with relational
 *               expressions.
 */
/* Include Files */
#include <stdio.h>

int main( void )
{
     int x = 2;

     if ( x = 3 )
          printf( "it's three!\n" );             
     else if ( x = 4 )
          printf( "it's four!\n" );              

     printf( "x has value %d.\n", x );
     return 0;
}
