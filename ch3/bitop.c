/*                           bitop.c
 *
 *   Synopsis  - Displays the results of bit operations on
 *               variables of type unsigned int.
 *
 *   Objective - Illustrates operations on bits.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     unsigned int w1, w2, w3;                  /* Note 1 */

     w1 = 0x523;                               /* Note 2 */
     w2 = 0x746;
     w3 = 0x13a;

     printf( "w1 & w2 = %x\n", w1&w2 );	       /* Note 3 */
     printf( "w1 | w2 = %x\n", w1|w2 );	       /* Note 4 */
     printf( "w1 ^ w2 = %x\n", w1^w2 );        /* Note 5 */
     printf( "~w1 = %x\n", ~w1 );              /* Note 6 */

                                               /* Note 7 */
     printf( "w1 | ( ~w1 & w3 ) = %x\n", w1 | ( ~w2 & w3 ) );
     printf( "~( ~w1 | ~w3 ) = %x\n", ~( ~w1 | ~w3 ) );

     w1 ^= w2;                                 /* Note 8 */
     printf( "w1 is %x, w2 is %x\n", w1, w2 );
     
     /*  Shifting bits in a word */
     w1 = 0x1;
     w2 = 0x422;
     w1 = w1 << 3;                             /* Note 9 */
     w2 <<= 1;                                 /* Note 10 */
     printf( "w1 = %x\t w2 = %x\n", w1, w2 );
     printf( "w2 >> 2 is %x.\n", w2 >> 2  );   /* Note 11 */
     return 0;
}

