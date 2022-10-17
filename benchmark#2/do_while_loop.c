/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A = 9, E = 1, Q = 8;
    
    do{
        A++;
        Q -= E;
    }
    while (A < 12 && Q < 18);
    
    printf("%d%d%d", A, E, Q);
    
    return 0;
}