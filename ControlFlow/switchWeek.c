#include<stdio.h>
#include<stdlib.h>

typedef enum{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
} WeekDays;

int main(){
    printf("Monday/Sunday: %d%d\n", MONDAY, SUNDAY);

    WeekDays day;
    printf("Enter a day of the week: ");
    scanf("%u", &day);

    switch (day)
    {
    case MONDAY:
        printf("day %d is MONDAY\n", day);
        break;
    case TUESDAY:
        printf("day %d is TUESDAY\n", day);
        break;
    case WEDNESDAY:
        printf("day %d is WEDNESDAY\n", day);
        break;
    case THURSDAY:
        printf("day %d is FRIDAY\n", day);
        break;
    case SATURDAY:
        printf("day %d is SATURDAY\n", day);
        break;
    case SUNDAY:
        printf("day %d is SUNDAY\n", day);
        break;
    default:
        printf("day is unknow value:");
        break;
    }
    
    return EXIT_SUCCESS;
}