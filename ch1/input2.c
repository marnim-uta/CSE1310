/*					input2.c 
 *
 *   Synopsis  - A variable of type int is declared. The program
 *               prompts for, accepts input of, and outputs an
 *               integer value. The input and output are done 
 *               three times - in decimal, hexadecimal, and 
 *               octal.
 *
 *   Objective - Illustrates input and output of an integer 
 *               value with scanf() and printf() using the 
 *               conversion specifications %d for decimal, %x 
 *               for hexadecimal, and %o for octal.
 */

#include <stdio.h>

int main(void)
{
     int intvar;

     printf("Enter a decimal integer value: ");
     scanf("%d", &intvar);
                                                         /* Note 1 */
     printf("The hexadecimal equivalent of %d is %x.\n", intvar, intvar);

     printf("Enter a hexadecimal integer value: ");
     scanf("%x", &intvar);                               /* Note 2 */
                                                         /* Note 3 */
     printf("The value you entered was %o in octal.\n", intvar);

     printf("Enter an octal integer value: ");
     scanf("%o", &intvar);                               /* Note 4 */
     printf("The value you entered was %d in decimal.\n", intvar);
     return 0;
}
