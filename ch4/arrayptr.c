/*                        arrayptr.c
 *
 *   Synopsis  - Prints information about the address, the
 *               sizeof(), and the contents of an array, using 
 *               both array and pointer notation.
 *
 *   Objective - To illustrate the relationship between pointers
 *               and arrays and to demonstrate some of the
 *               different methods to access array elements.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
                                                        /* Note 1 */
     char   demoarray[5] = {'D', 'E', 'M', 'O', '!'};
     char   *demoptr = demoarray;
     int    i;
												 			
                                                        /* Note 2 */
     printf( "demoarray is %x.\n", demoarray );
     printf( "sizeof( demoarray ) is %d.\n", sizeof( demoarray ) );
     printf( "sizeof( demoarray[0] ) is %d.\n", sizeof( demoarray[0] ) );

                                                        /* Note 3 */
     printf( "\ndemoptr is %x.\n", demoptr );
     printf( "sizeof(demoptr) is %d.\n", sizeof( demoptr ) );
     printf( "sizeof( *demoptr ) is %d.\n", sizeof( *demoptr ) );

     printf( "\ni\tdemoarray[i]\t*(demoarray+i)\t*demoptr\n" );
     printf( "-\t------------\t--------------\t--------\n" );
     for ( i = 0; i < 5; i++, demoptr++ )               /* Note 4 */
                                                        /* Note 5 */
     printf( "%d\t     %c     \t     %c     \t    %c\n",
					i, demoarray[i], *( demoarray + i ), *demoptr );
     return 0;
}
