#include <stdio.h>
#include <stdlib.h>

int main(){
    char readfile[100] = {};
    char writefile[100] = {};
    char buffer[100] = {};
    FILE *readFH;
    FILE *writeFH;

    printf("Please enter a filename to read : ");
    fscanf(stdin,"%s", readfile);

    printf("Please enter a filename to write to : ");
    fscanf(stdin,"%s", writefile);

    readFH = fopen(readfile, "r+");
    writeFH = fopen(writefile, "w+");

    // read all the strings you have in file

    while(fscanf(readFH, "%s", buffer)!= EOF){
        //printf("the word you read: %s \n", buffer);
        fprintf(writeFH, "%s ", buffer);
    }
    
    // Another way to read all the strings in file and print them
    // while(fscanf(readFH, "%s", buffer)== 1){ //or until you reach EOF
    //     fprintf(writeFH, "%s ", buffer);
    // }

    
    fclose(readFH);
    fclose(writeFH);

    return 0;
}