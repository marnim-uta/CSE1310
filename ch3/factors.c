/*                               factors.c
 *
 *   Synopsis  - Prompts for and accepts input of an integer
 *               that is greater than 2. Displays the prime
 *               factors of that integer
 *
 *   Objective - An example of a useful working program.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     unsigned number, factor;          /* number will store the
                                        * input, and factor
                                        * drives the for loop to
                                        * find the factors.
                                        */

     printf( "This program will print the prime factors\n" );
     printf( "of an integer that is greater than 2.\n\n" );

     /* Prompt for and input the integer. */
     printf( "Enter an integer that is greater than 2 : " );
     scanf( "%u", &number );

     printf( "Prime factors of %d are ", number );
     for ( factor = 2; factor <= number; factor++ )


          /* if factor divides number evenly */
          if ( ! ( number % factor ) ) {

               /* output factor */
               printf( "%d " , factor );
               /* take the factor out of number */
               number /= factor;

               /* decrement factor so that it can test
                * for a repeated factor.
                */
               factor--;
          }
     printf( "\n" );
     return 0;
}
