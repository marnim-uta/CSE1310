/*                              sizeof1.c
 *
 *   Synopsis  - Displays the number of bytes occupied by types 
 *               int, short, and long by using sizeof(). 
 *
 *   Objective -  Demonstrates the use of the sizeof() 
 *                operator with different integer types. 
 *                Determines the range of the different types of
 *                integer variables.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     short shortvar;
     long  longvar;
                                                         /* Note 1 */
     printf( "An int has %d bytes.\n", sizeof( int ) );
                                                         /* Note 2 */
     printf( "A long int has %d bytes.\n", sizeof longvar );
     printf( "A short int has %d bytes.\n", sizeof shortvar );
                                                         /* Note 3 */
     printf( "It takes %d bytes to store shortvar + 2\n",
                                        sizeof( shortvar + 2 ) );
     return 0;
}

