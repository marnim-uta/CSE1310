/*        la9.c     */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int j = 3;

     printf( "The sizeof( j++ ) is %d\n",
                                 sizeof( j++ ) );
     printf( "The value of j is %d\n", j );
     return 0;
}
