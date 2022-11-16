
#include <stdio.h>
#define ROWS 9
#define COLS 9

void fill_array(int arr[][COLS]);
void print_array(int arr[][COLS]);

int main(void){
    int arr[ROWS][COLS] = {};

    // method to fill the array
    fill_array(arr);
    // method to print the array 
    print_array(arr);

    return 0;
}


void fill_array(int arr[][COLS]){

    for (int i = 0; i < ROWS; i++){

        for (int j = 0; j < COLS; j++){

            arr[i][j] = (i+1) * (j+1);
        }
    }

}

void print_array(int arr[][COLS]){

    printf("    ");
    for (int i = 0; i < COLS; i++){
        printf("%5d", i+1);
    }
    printf("\n");
    
    printf("    ");
    for (int i = 0; i < COLS; i++){
        printf("-----");
    }
    printf("\n");

    for (int i = 0; i < ROWS; i++){

        printf("%d  |" , i+1);

        for (int j = 0; j < COLS; j++){

            printf("%5d", arr[i][j]);
            
        }
        printf("\n");
    }

}

