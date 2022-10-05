/*					miles.c
 *
 *	Synopsis-				Accepts a number of gallons as input and
*					calculates and displays the number of miles
 *					that can be traveled.
 *
 *	Objective-				To illustrate the use of a preprocessor-defined
 *					constant to make a program easily modifiable,
 *					and the use of parameters and return values to
 *					make a function independent.
 */

/* Include Files */
#include <stdio.h>

/* Preprocessor Constants */
#define MILEAGE 28															/* Note 1 */

/* Function Prototypes */
int miles (int num_gallons, int mileage );
/* PRECONDITION:					num_gallons is an integer that represents the
 *					amount of gasoline available. mileage is the
 *					miles per gallon of a vehicle.
*
 * POSTCONDITION:					The return value is the number of miles that
 *					can be traveled with the vehicle and that
 *					amount of gas.
 */

int main(void)
{
	int gallons;
	printf("        Travel Calculator\n");
	printf("---------------------------------\n");
																						/* Note 2 */
	printf("Current mileage is %d miles per gallon.\n", MILEAGE);
	printf("\n\nEnter the gallons of gas (whole numbers please): ");
	scanf("%d", &gallons);
																						/* Note 3 */
	printf("Thank you. You will be able to travel %d miles.\n",
										miles( gallons, MILEAGE));
	return 0;
}
/*******************************miles()**************************/
int miles( int num_gallons, int mileage )															/* Note 4 */
{
	return ( num_gallons * mileage );
}
