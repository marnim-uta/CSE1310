/*                          pointer.c  
 *
 *   Synopsis  - Assigns a value to a char variable twice and 
 *               prints that value and its memory address.
 *
 *   Objective - Demonstrates how to reference the contents of a 
 *               pointer variable.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     char c,	
          *ptr_c = &c;                                    /* Note 1*/	

     c = 'Q';	

     printf( "The value of c is %c.\n", c );
     printf( "ptr_c points to %c.\n", *ptr_c );														/* Note 2 */
     printf( "The character %c is stored in hex %x.\n", c, ptr_c );

     *ptr_c = 'r';                                        /* Note 3 */

     printf( "The value of c is now %c.\n", c );          /* Note 4 */
     printf( "ptr_c now points to %c.\n", *ptr_c );
     printf( "The character %c is stored in hex %x.\n", c, ptr_c );
     return 0;
}