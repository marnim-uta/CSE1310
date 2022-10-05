/*                         mistake1.c
 *
 *   Synopsis  - Accepts input of a value of type int and issues
 *               messages about its value.
 *
 *   Objective - To further illustrate that an assignment is
 *               an expression.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int intvar;

     printf( "Enter a decimal value : " );
     scanf( "%d", &intvar );

     if ( intvar = 3 )
        printf( "It's THREE!!\n" );

     printf( "The value of intvar is %d.\n", intvar );
     return 0;
}
