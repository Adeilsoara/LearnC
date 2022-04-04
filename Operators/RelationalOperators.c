#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b;

    printf("Enter the value (int):");
    scanf("%d", &a);
    printf("Enter the value (int):");
    scanf("%d", &b);

    printf("A == B --> %d\n", a == b);
    printf("A != B --> %d\n", a != b);
    printf("A > B --> %d\n", a > b);
    printf("A < B --> %d\n", a < b);
    printf("A >= B --> %d\n", a >= b);
    printf("A <= B --> %d\n", a <= b);
    return EXIT_SUCCESS;
}