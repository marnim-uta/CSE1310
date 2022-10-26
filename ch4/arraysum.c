/*               arraysum.c
 *
 *   Synopsis  - Displays the value returned by the 
 *               function addarray() with two different 
 *               sets of parameters.
 *
 *   Objective - To provide a test program for the 
 *               function addarray() written for an 
 *               exercise. The answers should be 55 and 0.
 */

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
int addarray( int *, int );

int main( void )
{
     int array1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
         array2[4]  = { 0, 0, 0, 0 };

     printf( "The sum of the elements in array1 is %d.\n", addarray( array1, 10 ) );
     printf( "The sum of the elements in array2 is %d.\n", addarray( array2, 4 ) );
     return 0;
}
