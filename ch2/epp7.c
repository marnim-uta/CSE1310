/*              epp7.c               */
	
/* Include Files */
#include <stdio.h>

/* Function Prototypes */
int positive( int num );
/*   PRECONDITION:  num is any integer.
 *
 *   POSTCONDITION: The return value is 1 if num > 0
 *                  and 0 otherwise.
 */

int main( void )
{
     int inputint;

     printf( "Enter an integer and " );
     printf( "press return after the prompt.\n" );
     printf( "Signal EOF when you are done.\n" );
     printf( ">>> " );

     while ( scanf( "%d", &inputint ) != EOF ) {
          if ( positive( inputint ) )
               printf( "That one was positive.\n" );
          else
               printf( "That one wasn't.\n" );
          printf( ">>> " );
     }
     return 0;
}
