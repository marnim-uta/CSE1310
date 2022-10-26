/*           la34.c                  */

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
void p1( int*, int );

int main( void )
{
     int int1, int2, int3;

     int1 = 3;
     int2 = 7;
     int3 = 2;

     p1( &int3, int2 );	
     printf( "Back in main, int1 is %d, int2 is %d, ", int1, int2 );
     printf( "and int3 is %d.\n\n", int3 );

     p1( &int3, int3 );
     printf( "Back in main, int1 is %d, int2 is %d, ", int1, int2 );
     printf( "and int3 is %d.\n", int3 );
     return 0;
}

void p1( int *i, int j )
{
     *i = *i  +  3;
     j  = 4 * j;
     printf( "In p1, *i is %d, and j is %d.\n", *i, j );
}
