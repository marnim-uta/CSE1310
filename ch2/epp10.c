/*             epp10.c               */

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
void printmoney( int money );
/*   PRECONDITION:  money is any integer. It represents
 *					a number of pennies.
 *
 *   POSTCONDITION: The value of money is been displayed
 *                  on standard output with a $ preceding
 *                  the number and a decimal point before
 *                  the last two digits.
 */

int main( void )
{
     printmoney( 12 );
     printf( "\n" );
     printmoney( 1000 );
     printf( "\n" );
     printmoney( 25304 );
     printf( "\n" );
     printmoney( 0 );
     printf( "\n" );
     printmoney( 145 );
     printf( "\n" );
     return 0;
}
