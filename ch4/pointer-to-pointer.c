/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x = 5;
    
    int *p = &x;
    *p = 6;
    
    int **q = &p;
    int ***r = &q;

    printf("value at address stored in p : %d \n", *p);
    printf("Address stored in p: %p \n", p);
    printf("value at address stored in q : %p \n", *q);
    printf("value at address in q: %d \n", *(*q));
    printf("value at address in r: %d \n", *(*(*r)));
    
    ***r = 10;
    printf("value of x : %d \n", x);
    
    **q = *p + 2;
    printf("value of x : %d \n", x);
    
    return 0;
}
