/*                  epp9.c                   */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define true  1
#define false 0

int main( void )
{
     int correct, inputint;

     inputint = -1;
     correct = false;
     while ( !correct ) {
          if ( 0 < inputint < 20 ) {
               printf( "Thank you.\n" );
               correct = true;
          }
          else  {
               printf( "Enter an integer " );
               printf( "between 0 and 20: " );
               scanf( "%d", &inputint );
          }
     }
     return 0;
}

