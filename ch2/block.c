/*                       block.c
 *
 *   Synopsis  - The values of two variables named i are
 *               displayed. They are declared in two
 *               different blocks.
 *
 *   Objective - To illustrate block structuring of C source 
 *               code.
 */

/* Include Files */
#include <stdio.h>


int main()
{
    printf("Hello World");
    int x = 6;
    printf("%d", x);
    {
        int x = 5;
        printf("%d", x);
    }

    return 0;
}