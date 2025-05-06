#include <stdio.h>
int leap_year(int year);
int main()
{
    int month, day, year, days = 0;
    printf("Enter the month (1-12), day(1-31), year: ");
    scanf("%d%d%d", &month, &day, &year);
    int Leap_year = leap_year(year);
    switch (month)
    {
    case 1:
        printf("January %d, %d is day %d", day, year, day);
        break;
    case 2:
    {
        days += 31;
        printf("February %d, %d, is day %d", day, year, days + day);
        break;
    }
     case 3:
    {
        if(Leap_year==1)
        days += 31+29;
        else
        days+=31+28;
        printf("March %d, %d, is day %d", day, year, days + day);
        break;
    }
     case 4:
    {
        days += 31;
        printf("February %d, %d, is day %d", day, year, days + day);
        break;
    }
     case 5:
    {
        days += 31;
        printf("February %d, %d, is day %d", day, year, days + day);
        break;
    }

    default:
        break;
    }

    return 0;
}
int leap_year(int year)
{
    if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
        return 1;
    else
        return 0;
}