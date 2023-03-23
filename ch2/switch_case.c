#include <stdio.h>
int main() {
    char operation;
    int n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%d %d",&n1, &n2);
    switch(operation)
    {
        case '+':
            printf("%d + %d = %d",n1, n2, n1+n2);
            break;
        case '-':
            printf("%d - %d = %d",n1, n2, n1-n2);
            break;
        case '*':
            printf("%d * %d = %d",n1, n2, n1*n2);
            break;
        case '/':
            printf("%d / %d= %d",n1, n2, n1/n2);
            break;
        default: // operator doesn't match any case constant +, -, *, /
            printf("Error! operator is not correct");
    }
    return 0;
}

