/*                     laincr.c
 *
 *   Synopsis  - Displays values of int1, int2 and 
 *               int3
 *
 *   Objective - To provide practice with automatic
 *               increment and decrement
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int int1 = 4,
         int2 = 7,
         int3;

     int3 = ++int1 * --int2;
     printf("%d  %d  %d\n", ++int1, int2--, --int3);
     printf("%d  %d  %d\n", int1, int2, int3);
     return 0;
}
