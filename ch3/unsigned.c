/*                           unsigned.c
 *
 *   Synopsis  - Variables of types unsigned int and int are 
 *               declared. The same values are assigned to each 
 *               and the values are displayed by calls to 
 *               printf().
 *
 *   Objective - To illustrate some of the differences between 
 *               the types unsigned int and int.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     unsigned positive;                          /* Note 1 */
     int signedvar;

     printf( "Unsigned\t  Signed\n" );
     printf( "--------\t  ------\n" );

     positive  = 65535;                          /* Note 2 */
     signedvar = 65535;
                                                 /* Note 3 */
     printf( "  %6u\t  %6d\n", positive, signedvar );

     positive  *= 2;                             /* Note 4 */
     signedvar *= 2;
                                                 /* Note 3 */
     printf( "  %6u\t  %6d\n", positive, signedvar );

     positive  += 3;                             /* Note 5 */
     signedvar += 3;
                                                 /* Note 3 */
     printf( "  %6u\t  %6d\n", positive, signedvar );

     positive  = 40000;                         /* Note 6 */
     signedvar = 40000;
                                                /* Note 3 */
     printf( "  %6u\t  %6d\n", positive, signedvar );

     positive  = 4 - 5;                         /* Note 7 */
     signedvar = 4 - 5;
                                                /* Note 3 */
     printf( "  %6u\t  %6d\n", positive, signedvar );
     return 0;
}

