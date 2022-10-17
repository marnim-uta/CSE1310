/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A = 20, B = 10, C = 1;
    for (int i = A; i > 15; i--){
        for (int j = 7; j < B; j++){
            for (int k = C; k < 6; k++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
