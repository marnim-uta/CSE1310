/*                        errorchk.c
 *
 *   Synopsis  - Prompts for and accepts input of an integer.
 *               The integer is tested to see that it meets the
 *               stated criteria. If it doesn't, an error
 *               message is issued. If all criteria are met,
 *               execution terminates silently.
 *
 *   Objective - Illustrates the necessary grouping of if and
 *               associated else statements.
 */

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
int odd( int intvar );
/*   PRECONDITION:  intvar can be any integer
 *
 *   POSTCONDITION: The value returned is 1 if the parameter is odd
 *                  and 0 if the parameter is even
 */

int main( void )
{
     int inputint;

     printf( "Enter a positive even " );
     printf( "number that is less than 20.\n" );
     scanf( "%d", &inputint );

     if ( inputint < 20 )                         /* Note 1 */
          if ( odd( inputint ) )
               printf( "Sorry that number wasn't even.\n" );
          else if ( inputint <= 0 )
               printf( "That number wasn't positive.\n" );
                                                   /* Note 2 */
     else
          printf( "That number was too big.\n" );
     return 0;
}

/*******************************odd()***************************/

int odd( int intvar )                                /* Note 3 */
{
	return( intvar % 2 );
}
