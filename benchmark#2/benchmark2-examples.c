// Example 1

#include <stdio.h>

int main()
{
    int num = 10;
    if(num >= 0){
        printf("Number is ZERO or POSITIVE");
    }
    else{
        printf("Number is NEGATIVE");
    }
    return 0;
}

//Example 2

#include <stdio.h>

int main()
{
    int day = 2;

    if(day == 1){
        printf("Monday");
    }
    else if(day == 2){
        printf("Tuesday");
    }
    else if(day == 3){
        printf("Wednesday");
    }
    else if(day == 4){
        printf("Thursday");
    }
    else if(day == 5){
        printf("Friday");
    }
    else if(day == 6){
        printf("Saturday");
    }
    else if(day == 7){
        printf("Sunday");
    }
    else{
        printf("Invalid Input! Please enter week number between 1-7.");
    }
    return 0;
}

// Example 3

#include <stdio.h>

int main()
{
    int final = 78;
    
    if (final > 90){
        printf("You got an A \n");
    }
    else if (final >= 80 && final <= 89){
        printf("you got a B \n");
    }
    else if(final >= 70 && final <= 79){
        printf("you got a C \n");
    }
    else{
        printf("you got a D \n");
    }

    return 0;
}


// Example 4

#include <stdio.h>

int main()
{
    int final = 78;
    
    if (final > 90){
        printf("You got an A \n");
    }
    else{
        if (final >= 80 && final <= 89){
            printf("you got a B \n");
        }
        else{
            if (final >= 70 && final <= 79){
                printf("you got a C \n");
            }
            else{
                printf("you got a D \n");
            }
        }
    }

    return 0;
}


// Example 5

#include <stdio.h>

int main()
{
    int A = 9, E = 11, Q = 18;
    
    if (A < E  && E < Q){
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


//Example 6

#include <stdio.h>

int main()
{
    int A = 9, E = 1, Q = 8;
    
    switch(A){
        case 1:
            printf("%d", A);
            break;
        case 2:
            printf("%d", E);
            break;
        case 3:
            printf("%d", Q);
            break;
        default:
            printf("%d", A * E * Q);
    }

    return 0;
}


// Example 7

#include <stdio.h>
int main()
{
    int a = 0;
    while(a < 5){
        printf("%d", a);
        a++;
    }

    return 0;
}


// Example 8

#include <stdio.h>

int main()
{
    int a = 0;
    do{
        printf("%d", a);
        a++;
    }while(a < 5);

    return 0;
}


// Example 9

#include <stdio.h>

int main()
{
    int A = 9, E = 1, Q = 8;
    
    while (A < 12 && Q < 18){
        A++;
        Q -= E;
    }
    
    printf("%d%d%d", A, E, Q);
    
    return 0;
}


// Example 10

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

// Example 11

#include <stdio.h>

int main()
{
    int i;
    
    for(i=1; i<=5; i++)
    {
        printf("%d", i);
    }

    return 0;
}

// Example 12

#include <stdio.h>

int main()
{
    int i, j;
    
    for(i=1; i<=5; i++){
        for(j=1; j<=3; j++){
            printf("%d ", i *j);
        }
        printf("\n");
    }

    return 0;
}

// Question 13

#include <stdio.h>

int main()
{
    for (int i = 20; i > 15; i--){
        for (int j = 7; j < 10; j++){
            for (int k = 1; k < 6; k++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}