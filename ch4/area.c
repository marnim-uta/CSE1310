/*                         area.c
 *
 *   Synopsis  - Accepts input of values for the length and
 *               width of a rectangle, calculates and displays
 *               the area of the rectangle.
 *
 *   Objective - Illustrates how to structure a program so that
 *               input is done in a separate function. 
 */

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
void get_input( double *len_ptr, double *wid_ptr );
/*   PRECONDITION:  len_ptr and wid_ptr contain the addresses of 
 *                  variables of type double declared in the calling 
 *                  function
 *
 *   POSTCONDITION: input from the keyboard, in the form of two calls 
 *                  to scanf(), assigns values to the contents of the 
 *                  actual passed parameters
 */

double calculate( double val1, double val2 );
/*   PRECONDITION:  val1 and val2 are variables of type double
 *
 *   POSTCONDITION: returns the product of its arguments  
 */

void display( double a );
/*   PRECONDITION:  a is a double representing the area of a rectangle 
 *
 *   POSTCONDITION: displays the area, a, of a rectangle  
 */

int main( void )
{
     double length, width, area;                    /* Note 1 */

     get_input( &length, &width );                  /* Note 2 */

     area = calculate( length, width );

     display( area );
     return 0;
}

/*******************************get_input()**********************/

void get_input( double *len_ptr, double *wid_ptr )  /* Note 3 */
{
     printf( "Enter the length > ");
     scanf( "%lf", len_ptr );                       /* Note 4 */

     printf( "Enter the width > ");
     scanf( "%lf", wid_ptr );                       /* Note 4 */
     return;
}

/*******************************calculate()**********************/

double calculate( double val1, double val2 )
{
     return( val1 * val2 );
}

/*******************************display()************************/

void display( double a )
{
     printf( "The area is %5.2f\n", a );
}
