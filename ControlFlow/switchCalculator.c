#include<stdio.h>
#include<stdlib.h>

int main(){
    char operator;
    double operand_a, operand_b, result;

    printf("Enter the operator: ");
    scanf("%c", &operator);
    printf("Enter firts operand: ");
    scanf("%lf", &operand_a);
    printf("Enter second operand: ");
    scanf("%lf", &operand_b);
    printf("\n");

    int error = 0;

    switch (operator)
    {
    case '+':
        result = operand_a + operand_b;
        break;
    case '-':
        result = operand_a - operand_b;
        break;
    case '*':
        result = operand_a * operand_b;
        break;
    case '/':
        result = operand_a / operand_b;
        break;
    default:
        error = 1;
        break;
    }

    if (error)
    {
        printf("Error: unknow operator: \n");
    }
    else
    {
        printf("%.1f %c %.1f = %.1f \n", operand_a, operator, operand_b, result);
    }
    
    return EXIT_SUCCESS;
}