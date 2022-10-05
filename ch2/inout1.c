/*                             inout1.c
 *
 *   Synopsis  - Takes input from the keyboard and echoes that
 *               input back to the terminal.
 *
 *   Objective - Illustrates another use of the while loop and 
 *               leads into the discussion of inout2.c.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int iochar;                      /* Note 1 */

     iochar = getchar();              /* Note 2 */
     while ( iochar != EOF ) {        /* Note 3 */
          putchar( iochar );          /* Note 4 */
          iochar = getchar();         /* Note 5 */
     }
     return 0;
}