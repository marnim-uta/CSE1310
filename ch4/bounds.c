/*                    bounds.c
 *
 *   Synopsis  - The program is supposed to increment each 
 *               element of an array and display the value of 
 *               an unrelated variable. It has a bug in it.
 *   Objective - To illustrate a typical error and the fact that
 *               the compiler does not check on array bounds.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int array[10];
     int nextvar = 5;
     int i;

     printf( "nextvar is %d.\n", nextvar );            /* Note 1 */
     for ( i = 0; i <= 10; i++ )                       /* Note 2 */
          array[i]=i;	
     printf( "nextvar is now %d.\n", nextvar );        /* Note 3 */
     return 0;
}
