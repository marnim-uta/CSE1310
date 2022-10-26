/*                 exp.c
 *
 *   Synopsis  - Accepts input of float values for x and epsilon 
 *               and calculates e to the x using the Taylor 
 *               series. The series is expanded to the point 
 *               where term is less than epsilon.
 *
 *   Objective - Illustrates the use of pointers and the address
 *               operator in simulating pass by reference.
 */ 

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
void intro( void );
/*   PRECONDITION:  none
 *
 *   POSTCONDITION: displays messages about the program  
 */

double e_to_the_x( double x, double eps, int *num_terms_ptr );
/*   PRECONDITION:  x is a double representing the exponent; eps is a 
 *                  double representing the desired precision; 
 *                  num_terms contains the address of an int that will 
 *                  contain the number of terms in the Taylor Series 
 *                  necessary to achieve the desired precision.
 *
 *   POSTCONDITION: uses the Taylor series expansion to calculate "e 
 *                  to the x" ; the series is terminated when the term 
 *                  is less than epsilon; returns the value of "e to 
 *                  the x" and enters the number of terms in 
 *                  *num_terms  
 */

void getinput( double *x_ptr, double *eps_ptr );
/*   PRECONDITION:  x_ptr contains the address of a double for the 
 *                  value of x; eps_ptr contains the address of a 
 *                  double for the value of epsilon
 *
 *   POSTCONDITION: uses keyboard input, with scanf() calls, to 
 *                  populate the passed (by reference) parameters
 */

int main( void )
{
     double x, epsilon, exp_val;	
     int num_terms;	

     intro();

     getinput( &x, &epsilon );

     exp_val = e_to_the_x( x, epsilon, &num_terms );

     printf( "e raised to the power %.5lf is %.5lf.\n", x, exp_val );
     printf( "The value was approximated with %d terms.\n", num_terms );
     return 0;
}

/*******************************intro()**************************/

void intro( void )
{
     printf( "This program will calculate the value of e " );
     printf( "raised to the power x.\nYou will be asked to" );
     printf( " enter a real number x,\nand a value epsilon" );
     printf( " that gives an indication of the desired " );
     printf( " accuracy.\n" );
}

/*******************************e_to_the_x()*********************/

double e_to_the_x( double x, double eps, int *num_terms_ptr )
{
     double term = 1, value = 0;
     int count = 1;
     while ( term >= eps ) {
          value += term;
          term *= x;
          term /= count++;
     }

     *num_terms_ptr = count - 1;
     return( value );
}

/*******************************getinput()***********************/

void getinput( double *x_ptr, double *eps_ptr )
{
     printf( "\nEnter a value for x : " );
     scanf( "%lf", x_ptr );
     printf( "Enter a value for precision that is < 1: " );
     scanf( "%lf", eps_ptr );
}
