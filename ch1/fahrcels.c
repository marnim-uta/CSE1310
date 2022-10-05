/*                           fahrcels.c
 *
 *   Synopsis  - Converts a temperature entered in degrees 
 *               Fahrenheit to Celsius. Uses variables of type int.
 *
 *   Objective - To illustrate a practical use of arithmetic
 *               operators.
 */

#include <stdio.h>

int main( void )
{
     int fahrenheit, celsius;                      /* Note 1 */

     printf("Enter a temperature in fahrenheit: ");
     scanf("%d", &fahrenheit);

     celsius = 5 * (fahrenheit  -  32) / 9;       /* Note 2 */

     printf("%d in Fahrenheit is %d in Celsius.\n",
                                          fahrenheit, celsius);
     return 0;
}
