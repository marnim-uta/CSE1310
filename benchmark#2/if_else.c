/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A = 9, E = 11, Q = 18;
    
    if (A <E  && E < Q){
        A += A;
        
        if (A < Q){
            E = 3;
        }
        else if(E < Q){
            Q += E;
        }
        else{
            A -= 3;
        }
    }
    
    printf("%d%d", A, E+Q);

    return 0;
}
