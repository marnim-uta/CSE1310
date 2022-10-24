/*                            ints.c
 *
 *   Synopsis  - Declares variables with types, int, long, and 
 *               short. Displays values in decimal, octal, and 
 *               hexadecimal. 
 *
 *   Objective - Demonstrates the conversion specifications for 
 *               types short and long and potentially 
 *               demonstrates overflow.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     short     shortvar;                           /* Note 1 */
     long int  longvar;                            /* Note 2 */
     int       intvar;

     shortvar = 32767;                             /* Note 3 */
     intvar   = 32767;
     longvar  = 32767;                
                                                   /* Note 4 */
     printf( "shortvar is %hd in decimal, ", shortvar );
     printf( "%ho in octal, and %hx in hexadecimal.\n", 
                                           shortvar, shortvar );

     shortvar += 1;                                /* Note 5 */
     printf( "After adding 1, shortvar is %hd in decimal.\n",
                                           shortvar );

     printf ("\nintvar is %d in decimal, ", intvar );
     printf( "%o in octal, and %x in hexadecimal.\n",
                                           intvar, intvar );
     intvar++;	                                  /* Note 6 */
     printf( "After adding 1, intvar is %d in decimal.\n",
                                           intvar );

                                                  /* Note 7 */
     printf("\nlongvar is %ld in decimal, ", longvar );
     printf( "%lo in octal, and %lx in hexadecimal.\n",
                                           longvar, longvar );

     longvar++;                                  /* Note 8 */
     printf( "After adding 1, longvar is %ld in decimal.\n",
                                           longvar );
     return 0;
}
