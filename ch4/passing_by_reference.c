/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void increment(int* a){
    *a = *a + 1;
    printf("Address of increment variable a in memory: %p \n", a);
}

int main()
{
    int a;
    a = 10;
    printf("Address of main variable a in memory: %p \n", &a);
    increment(&a);
    printf("value of a %d \n", a);

    return 0;
}
