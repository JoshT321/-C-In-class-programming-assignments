#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    int month;
    int day;
    int age;
    int currentMonth = 9;
    int currentDay = 3;
    int daysAlive;

    printf("Enter your date of birth (mm/dd/yy): ");
    scanf("%d/%d/%d\n",&month, &day, &year);
    year = year + 1900;
    age = 2020 - year;

    daysAlive = (age*365) + ((currentMonth - month)*30) + (currentDay - day);

    printf("Hello, you have been alive for %d days", daysAlive);


    return(0);
}
