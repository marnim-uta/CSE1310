/*                            charvar.c
 *
 *   Synopsis  - Variables of type char and int are declared.  
 *               The sizeof() the char type is displayed.  Then 
 *               a value is assigned to each variable and 
 *               displayed with different conversion 
 *               specifications.
 *
 *   Objective - Illustrates the relationship between type char
 *               and type int and some of the different
 *               conversion specifications with printf().
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     char charvar;                                   /* Note 1 */
     int  intvar;
                                                     /* Note 2 */
     printf( "The sizeof type char is %d byte(s).\n\n",
                                           sizeof( char ) );

     charvar = 'c';                                 /* Note 3 */
                                                    /* Note 4 */
     printf( "charvar is the character %c.\n", charvar );
     printf( "It can be displayed in decimal as %d\n",charvar );
     printf( "in octal as %o or \n", charvar );
     printf( "in hexadecimal as %x.\n\n", charvar );

     intvar = 73;
     printf( "Intvar is the decimal integer, %d.\n", intvar );
     printf( "It can be written in hex, %x,\nor octal, %o, ",
                                             intvar, intvar );

                                                   /* Note 5 */
     printf( "or even treated as the character %c.\n",intvar );
     return 0;
}

