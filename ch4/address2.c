/*					address2.c  
 *
 *	Synopsis-				Prints the address of a variable.
 *
 *	Objective-				Demonstrates pointers as addresses in memory.
 *					Gives the syntax of declaring a pointer to an 
 *					integer and one technique for initializing a 
 *					pointer.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
	int intvar;	
	int *ptr_to_intvar;														/* Note 1 */

	printf( "The value of ptr_to_intvar is %p.\n",					
										ptr_to_intvar );														/* Note 2 */

	ptr_to_intvar = &intvar;														/* Note 3 */

	printf( "The address of intvar is %p.\n", &intvar );	
	printf( "The value of ptr_to_intvar is %p.\n",					
										ptr_to_intvar );														/* Note 4 */
	return 0;
}