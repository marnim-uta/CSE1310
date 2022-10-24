/*                            floatpt.c
 *
 *   Synopsis  - The values of variables of type float, double,
 *               and long double are initialized and displayed
 *               in different formats by printf().  The sizeof()
 *               each type is also displayed.
 *
 *   Objective - Illustrates declaration, assignment, and
 *               some of the output options with printf()
 *               of floating point variables.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     float       floatvar;                            /* Note 1 */
     double      doublevar;
     long double ldvar;
                                                      /* Note 2 */
     printf( "The number of bytes in a float is %d.\n",
                                          sizeof( float ) );
     printf( "The number of bytes in a double is %d.\n",
                                          sizeof( double ) );
     printf( "The number of bytes in a long double is %d.\n",
                                          sizeof( long double ) );

     floatvar = 65.328f;                             /* Note 3 */
                                                     /* Note 4 */
     printf( "floatvar has the value %7.2f.\n", floatvar );
     printf( "It can also be written in the form %10.3e.\n",
                                          floatvar );
     printf( "It can also be written in the form %10.3E.\n",
                                          floatvar );
     printf( "It can also be written in the form %10.3g.\n",
                                          floatvar );

     doublevar = 1.2465e-5;                         /* Note 5 */
     printf( "doublevar has the value %6.3f.\n", doublevar );
     printf( "It can also be written in the form %7.5e.\n",
                                          doublevar );
     printf( "It can also be written in the form %7.5E.\n",
                                          doublevar );
     printf( "It can also be written in the form %7.5g.\n",
                                          doublevar );

     ldvar = 584.365E+17L;                         /* Note 6 */
                                                   /* Note 7 */
     printf( "ldvar has the value %7.2Lf.\n", ldvar );
     printf( "It can also be written in the form %10.3Le.\n",
                                          ldvar );
     printf( "It can also be written in the form %10.3LE.\n",
                                          ldvar );
     printf( "It can also be written in the form %10.3Lg.\n",
                                          ldvar );
     return 0;
}
