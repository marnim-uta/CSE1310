/*                    address3.c
 *
 *   Synopsis  - Uses pointers to print the addresses of a char
 *               variable and an int variable and the address of 
 *               the next available memory location for each 
 *               data type.
 *
 *   Objective - Illustrates what is meant by a pointer-to-int
 *               being a separate data type. Demonstrates syntax 
 *               of declaring a pointer-to-char variable, 
 *               initialization of pointer variables, and 
 *               the result of adding 1 to pointer variables 
 *               of different types.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
     int intvar, *int_ptr;                                                  /* Note 1 */
     char charvar, *char_ptr = &charvar;                                    /* Note 2 */

     int_ptr = &intvar;

     printf( "The address of charvar is %p.\n", char_ptr );
     printf( "The next character could be stored at %p.\n", char_ptr + 1 ); /* Note 3 */
     printf( "The address of intvar is %p.\n", int_ptr );
     printf( "The next integer could be stored at %p.\n", int_ptr + 1 );    /* Note 4 */
     return 0;
}