/*               prob3.c
 *
 *   Synopsis  - Designed to input values into an array 
 *               of three ints and then display the 
 *               contents of that array. Has a bug in it.
 *   Objective - To provide practice debugging a program
 *               with a common mistake.
 */
/* Include Files */
#include <stdio.h>

int main( void )
{
     int intarray[3], count;

     printf( "intarray  %x,  &count  %x.\n", intarray, &count );
     for ( count = 0; count <= 3; count++ ) {
          printf( "Cell #%d : ", count );
          scanf( "%d", intarray+count );
     }

     printf( "The contents of the array are: " );
     for ( count = 0; count <= 3; count++ )
          printf( "%d\n", intarray[count] );
     return 0;
}