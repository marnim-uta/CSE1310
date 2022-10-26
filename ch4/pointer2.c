/*                       pointer2.c 
 *
 *   Synopsis  - Accepts input of a single character entered 
 *               from the keyboard and prints the entered value 
 *               unless it was a newline.
 *
 *   Objective - Illustrates use of NULL and relational
 *               expressions with pointers.
 */

/* Include Files */
#include <stdio.h>                              /* Note 1 */

int main( void )
{
     int c, *input_ptr = &c;                    /* Note 2 */

     printf( "Please enter a character from the keyboard" );
     printf( " or press return.\n" );

     if ( ( *input_ptr = getchar() ) == '\n' )  /* Note 3 */
          input_ptr = NULL;                     /* Note 4 */

     if ( input_ptr == NULL )                   /* Note 5 */		
          printf( "Just a return was typed.\n" );
     else			
          printf( "The character %c was entered.\n", *input_ptr );
     return 0;
}