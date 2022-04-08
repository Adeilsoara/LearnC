#include<stdio.h>
#include<stdlib.h>

int main(){
    int userInput, result;

    do
    {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &userInput);

        if (userInput > 0)
        {
            result = 1;
            while (result < userInput)
            {
                result *= 2;
            }
            printf("Minimum power of 2 greater then %d: %d\n", userInput, result);
        }
        
    } while (userInput != -1);
    

    return EXIT_SUCCESS;
}