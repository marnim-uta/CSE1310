#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    FILE *fptr; // fptr is a file pointer or file handler, fptr = NULL
    fptr = fopen("input.txt", "r+"); // we open numbers.txt in read mode and 
    // fptr points to the file "numbers.txt"
    if(fptr== NULL){ //true
        printf("error reading file\n");
        exit(1);
    }
    else{
        printf("File read successfully\n");
    }

    fclose(fptr); // close the connection between file pointer and file

    return 0;
}