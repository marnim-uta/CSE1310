/*                epp13.c                 */
	
/* Include Files */
#include <stdio.h>

int main( void )
{
     int i, count = 0;

     for ( i = 8; i >= 0; i-- ) {
          if ( !( i%4 ) || ( i--%3 ) ) {
               i--;
               count++;
          }
     }

     printf( "%d\n", count );

     printf( "%d\n", count && ++i );

     printf( "%d\n", !count );

     printf( "%d\n", i > 0 );

     printf( "%d\n", 0 < count < 3 );
     return 0;
}
