/*                          block2.c
 *
 *   Synopsis  - This program will not compile.
 *
 *   Objective - To illustrate the fact that variables declared
 *               inside a block are unknown by the rest of the
 *               program.
 */
/* Include Files */
#include <stdio.h>

int main( void )
{
     {
          int i;                    /* Note 1 */
          scanf( "%d", &i );
     }

     printf( "i is %d.\n", i );     /* Note 2 */
     return 0;
}