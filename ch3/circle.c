/*                                circle.c
 *
 *   Synopsis  - Accepts input of the radius of a circle and 
 *               displays the area and circumference.
 *
 *   Objective - To illustrate the declaration and use of 
 *               functions with type other than int.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define PI 3.1415926

/* Function Prototypes */
double area( double r );                         /* Note 1 */
/* PRECONDITION:  r can be any positive real number.
 *
 * POSTCONDITION: Calculates the area of a circle given its radius. 
 */

double circumference( double r );
/* PRECONDITION:  r can be any positive real number.
 *
 * POSTCONDITION: Calculates the circumference of a circle given its 
 *                radius. 
 */


int main( void )
{
     double radius;

     printf( "Program to calculate area and circumference " );
     printf( "of a circle.\n" );
     printf( "------- -- --------- ---- --- ------------- " );
     printf( "-- - -------\n" );

     printf( "Please enter the radius : " );
     scanf ( "%lf", &radius );

     printf( "A circle with radius %5.2f has area %5.2f.\n",
                                        radius, area( radius ) );
     printf( "The circumference of the circle is %5.2f.\n",
                                        circumference( radius ) );
     return 0;
}

/*******************************area()**************************/

double area( double r )                          /* Note 2 */
{
     return( PI*r*r );
}

/*******************************circumference()*****************/

double circumference( double r )                 /* Note 2 */
{
     return( 2*PI*r );
}


