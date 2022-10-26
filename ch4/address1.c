/*                        address1.c
 *
 *   Synopsis  - Prints the address of a variable.
 *
 *   Objective - Illustrates addresses in memory and C's ability
 *               to display them.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int intvar;	

     printf( "The values of intvar are stored in the memory" );	
     printf( " location %p.\n", &intvar );            /* Note 1 */
     return 0;
}