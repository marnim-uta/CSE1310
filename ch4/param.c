/*                          param.c
 *
 *   Synopsis  - Displays the values of variables and parameters 
 *               before, during, and after a function call.
 *
 *   Objective - Illustrates passing parameters by value and
 *               by reference.
 */

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
void changit( int x, int *y );
/*   PRECONDITION:  x can be any integer and y must be initialized 
 *                  with the address of an integer variable.
 *
 *   POSTCONDITION: The local values of x and *int_ptr are displayed 
 *                  on the terminal screen. The value of x is not 
 *                  changed in main; however, the value of the 
 *                  variable pointed to by int_ptr has been changed.
 */

int main( void )
{	
     int x, y, *int_ptr;

     x = 1;
     y = 3;
     int_ptr = &y;                            /* Note 1 */

     printf( "In main before the call to changit," );
     printf( " x = %d, y = %d, *int_ptr = %d\n", x, y, *int_ptr );

     changit( x, int_ptr );                   /* Note 2 */

                                              /* Note 3 */
     printf( "In main after the call to changit," );
     printf( " x = %d, y = %d, *int_ptr = %d\n", x, y, *int_ptr );
     return 0;
}

/*******************************changit()************************/
void changit( int x, int *int_ptr )           /* Note 4 */
{
     x += 5;
     *int_ptr += 5;                           /* Note 5 */
                                              /* Note 6 */
     printf( "In changit, x = %d, *int_ptr = %d.\n", x, *int_ptr );
}
