/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int a;
    int *p;
    
    p = &a; // p is assigned the address of address
    
    a = 5; 
    
    printf("Location of pointer p : %p \n", p);
    printf("location of variable a : %p \n", &a);
    printf("Location of pointer p : %p \n", &p);
    printf("Value of the address p is pointing to %d \n", *p);
    
    *p = 8;
    printf("value of variable a : %d \n", a);
    

    return 0;
}
