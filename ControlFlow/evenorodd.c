#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){

    int userInput;
    printf("Enter a positive number:");
    scanf("%d", &userInput);

    if (userInput < 0)
    {
        printf("Warning: %d is negative.\n", userInput);
        return EXIT_FAILURE;
    }
    
    bool isEven = (userInput % 2 == 0) ? true : false;

    if (isEven)
    {
        printf("The number %d is even.\n", userInput);
    }
    else
    {
        printf("The number %d is odd.\n", userInput);
    }
    
    return EXIT_SUCCESS;
}