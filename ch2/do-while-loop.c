#include <stdio.h>

int main() {
    // Initialization statement
    int i = 1;
    
    do {
        // loop body
        printf("%d ", i);

        // update expression : i = i + 1
        i++;
    } while (i < 10); // condition : (i < 10)
    
    return 0;
}

