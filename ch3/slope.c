/*                           slope.c
 *
 *   Synopsis  - The user enters the coordinates of two points
 *               and the program will display the equation of
 *               the line through those two points.
 *
 *   Objective - To illustrate the use of floating point types
 *               in an applied program.
 */

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
void print_result( float x1, float y1, float x2, float y2);
/* PRECONDITION:  x1, y1, x2, y2 can be any real numbers.
 *
 * POSTCONDITION: Calculates the slope and y-intercept of a 
 *                line and displays the equation of the line.
 */

int main( void )
{
     float x1, y1, x2, y2;                        /* The points */


     /*  Input the coordinates of the points */
     printf( "Enter the first point.\n" );
     printf( "x: " );
     scanf( "%f", &x1 );
     printf( "y: " );
     scanf( "%f", &y1 );

     printf( "Enter the second point.\n" );
     printf( "x: " );
     scanf( "%f", &x2 );
     printf( "y: " );
     scanf( "%f", &y2 );

     print_result( x1, y1, x2, y2 );
     return 0;
}

/*******************************print_result()******************/

void print_result( float x1, float y1, float x2, float y2 )
{
     float slope, y_int;

     /*  Check for a vertical line */
     if ( x1 != x2 ) {
          /* the line is not vertical, calculate
           * the slope and y intercept
           */

          slope = ( y2 - y1 ) / ( x2 - x1 );
          y_int = y1 - slope * x1;

          /* Check for a horizontal line */
          if ( slope == 0 )                  /* horizontal line */
               printf( "The equation is y = %5.2f\n",y1 );
          else {
               printf( "The equation is " );
               printf( "y = %5.2fx + %5.2f\n",slope, y_int );
          }
     }
     else                                   /* vertical line */
          printf( "The equation is x = %5.2f\n", x1 );
}

