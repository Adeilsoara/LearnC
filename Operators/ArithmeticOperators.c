#include<stdio.h>
#include<stdlib.h>

//INTERGER NUMBERS
/* int main(){
    int a, b, c;

    printf("Enter A operand (int): ");
    scanf("%d", &a);

    printf("Enter B operand (int): ");
    scanf("%d", &b);
    printf("\n");

    c = a + b;
    printf("c = a + b --> %d\n", c);

    c = a - b;
    printf("c = a - b --> %d\n", c);

    c = a * b; 
    printf("c = a * b --> %d\n", c);

    c = a / b; 
    printf("c = a / b --> %d\n", c);

    c = a % b;
    printf("c = a %% b --> %d\n", c);

    return EXIT_SUCCESS;
} */

//REAL NUMBERS
int main(){
    float a, b, c;

    printf("Enter A operand (float): ");
    scanf("%f", &a);

    printf("Enter B operand (float): ");
    scanf("%f", &b);
    printf("\n");

    c = a + b;
    printf("c = a + b --> %9.3f\n", c);

    c = a - b;
    printf("c = a - b --> %9.3f\n", c);

    c = a * b; 
    printf("c = a * b --> %9.3f\n", c);

    c = a / b; 
    printf("c = a / b --> %9.3f\n", c);

    return EXIT_SUCCESS;
}