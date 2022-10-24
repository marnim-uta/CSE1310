/*                            listit.c
 *
 *   Synopsis  - Masks out the high bit on characters
 *               WP_LINEFEED and WP_CARRETURN and deletes other
 *               characters with the high bit set while copying
 *               input to output.
 *
 *   Objective - Illustrates use of masks with bit operations.
 */

/*  Include Files */
#include <stdio.h>

/* Constant Definitions */
#define HIGHBIT	                     128          /* Note 1 */
#define NOHIGHBIT                    127
#define WP_LINEFEED                  138
#define WP_CARRETURN                 141
int main( void )
{
     int iochar;

     while ( ( iochar = getchar() ) != EOF ) {
          if ( HIGHBIT & iochar ) {               /* Note 2 */
               if ( ( iochar == WP_LINEFEED ) ||
                              ( iochar == WP_CARRETURN ) )
                                                  /* Note 3 */
                    putchar( iochar & NOHIGHBIT );
          }                                       /* Note 4 */
          else
                    putchar( iochar );
     }
     return 0;
}
