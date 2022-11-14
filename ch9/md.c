/*                       md.c
 *
 *   Synopsis  - Displays information about a 2 x 3 array of
 *               characters.
 *
 *   Objective - To illustrate the relationship between different
 *               expressions related to an array.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define ROWS       2
#define COLUMNS    3

int main( void )
{
     static char t[ROWS][COLUMNS] = { { 'a', 'b', 'c' },
                                      { 'd', 'e', 'f' }  };

     printf( "sizeof( char )   %d\n", sizeof( char ) );

     printf( "   2 X 3 array\n" );
     printf( "--------------------\n" );
     printf( "t                %p\n", t );                  /* Note 1 */
                                                            /* Note 2 */
     printf( "sizeof(t)        %d\n\n", sizeof(t) );

     printf( "  First 1 X 3 array\n" );
     printf( "--------------------\n" );
     printf( "*t               %p\n", *t );                 /* Note 1 */
                                                            /* Note 2 */
     printf( "sizeof(*t)       %d\n\n", sizeof(*t) );

     printf( "First element in array\n" );
     printf( "----------------------\n" );
     printf( "&t[0][0]         %p\n", &t[0][0] );           /* Note 1 */
                                                            /* Note 2 */
     printf( "sizeof(&t[0][0]) %d\n", sizeof( &t[0][0] ) );
     printf( "t[0][0]          %c\n", t[0][0] );	    /* Note 3 */
     printf( "sizeof (t[0][0]) %d\n", sizeof( t[0][0] ) );
     printf( "**t              %c\n\n", **t );              /* Note 3 */

     printf( "Second 1 X 3 array\n" );
     printf( "-------------------\n" );
     printf( "t+1              %p\n", t+1 );                /* Note 4 */
     printf( "sizeof(t+1)      %d\n", sizeof( t+1 ) );
                                                            /* Note 4 */
     printf( "*(t+1)           %p\n", *( t+1 ) );
     printf( "sizeof (*(t+1))  %d\n", sizeof( *( t+1 ) ) );
                                                            /* Note 5 */
     printf( "*(t+1) +2        %p\n", *( t+1 ) + 2 );
     printf( "*(*(t+1) +2)     %c\n", *( *( t+1 ) + 2 ) );
     return 0;
}
