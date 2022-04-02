#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    THRUST_NONE = 0,
    THRUST_LOW = 5,
    THRUST_MEDIUM = 9,
    THRUST_HIGH = 12,
    THRUST_MAXIMUM = 20,
} SpaceShitpTrust;

int main()
{
    SpaceShitpTrust thrust;

    thrust = THRUST_NONE;
    printf("Spaceship is ready to go, now thrust is: %d\n", thrust);

    thrust = THRUST_MAXIMUM;
    printf("Spaceship is taking off into the sky, now thrust is: %d\n", thrust);

    thrust = THRUST_MEDIUM;
    printf("Spaceship is entering ionosphere, now thrust is: %d\n", thrust);

    thrust = THRUST_LOW;
    printf("Spaceship is traveling in deep space, now thrust level is: %d\n", thrust);


    return EXIT_SUCCESS;
}