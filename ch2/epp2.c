/*              epp2.c                  */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int i, j;
	
     i = 2;
     j = 1;

     while ( (i > -5) || (j-- > 0) ) {
          if ( (j % 2) && (i-- % 3) )
               printf ("%d", j);
          else
               printf ("%d\n", i);
     }
     return 0;
}
