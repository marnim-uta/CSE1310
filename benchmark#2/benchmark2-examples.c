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
