/*                        scores.c
 *
 *   Synopsis  - Accepts input of 10 integers from the keyboard
 *               into an array of ints.
 *   Objective - Illustrates basic array definition and
 *               access of array elements. Includes an example
 *               of specifying a minimum field width in a
 *               printf() call.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int test_scores[10];              /* Note 1 */
     int i;

     printf( "Please enter the ten test scores now.\n" );
     for ( i = 0; i < 10; i++ ) {          /* Note 2 */
          printf( "#%2d > ", i+1 );        /* Note 3 */
          scanf( "%d", &test_scores[i] );  /* Note 4 */
     }
     printf( "Thank you.\n" );
     return 0;
}
