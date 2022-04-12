#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

const int MAX = 1000;

bool isPrime(int number){
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
    
}

void printLimitError(){
    printf("Error: must be > 2 and < MAX\n");
}

bool isOutOfBounds(int limit){
    return (limit < 2 || limit > MAX);
}

int main(){
    int upperLimit;
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    if (isOutOfBounds(upperLimit))
    {
        printLimitError();
        return EXIT_FAILURE;
    }

    printf("Prime number up to %d:\n", upperLimit);

    for (int number = 2; number < upperLimit; number++)
    {
        if (isPrime(number))
        {
            printf("%d\n", number);
        }
        
    }
    
    
    return EXIT_SUCCESS;
}