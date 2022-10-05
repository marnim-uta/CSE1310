/*                                      function.c 
 *
 *   Synopsis  - Makes four calls to the function f() and displays
 *               values involving the return value of the function.
 *   Objective - To demonstrate a function that 1) takes a 
 *               parameter, and 2) returns a value. Three 
 *               versions of function calls to f() are also 
 *               demonstrated.
 */

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
int f( int x );                                        /* Note 1 */
/* PRECONDITION:  x can be any integer
 *
 * POSTCONDITION: The value returned is x+3
 */

int main(void) 
{
     int x, y, z; 

     z = 4;
     y = f(z);                                         /* Note 2 */
     printf( "y is %d\n", y );

     x = y + f(3);                                     /* Note 3 */
     printf( "The value of x is %d\n", x );
    
     f(x);                                             /* Note 4 */
     printf( "The value of f(5) is %d\n", f(5) );      /* Note 5 */
     return 0;
}

/******************************* f() ****************************/

int f(int x)                                           /* Note 6 */
{
     return x + 3;                                     /* Note 7 */
}