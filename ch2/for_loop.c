#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Odd numbers between 1 to 20\n");  
    
    for(counter = 1; counter <= 20; counter++) {    
        if(counter%2 == 1) { 
            /* counter is odd, print it */
            printf("%d ", counter);  
        }  
    }  
    
    return 0;  
} 

