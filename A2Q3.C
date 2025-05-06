#include <stdio.h>

int main()
{
    int pollutant_number;
    double grams_per_mile, odometer_reading;
    printf("Enter pollutant number: ");
    scanf("%d", &pollutant_number);
    printf("Enter number of grams emitted per mile: \n");
    scanf("%lf", &grams_per_mile);
    printf("Enter odometer reading: ");
    scanf("%lf", &odometer_reading);

    switch (pollutant_number)
    {
    case 1:
    {
        if (odometer_reading <= 50000 && odometer_reading > 0)
        {
            if (grams_per_mile <= 3.4)
                printf("Emissions within the permitted level of 3.4 grams/mile");
            else
                printf("Emissions exceed permitted level of 3.4 grams/mile");
        }
        else if (odometer_reading > 50000)
        {
            if (grams_per_mile <= 4.2)
                printf("Emissions within the permitted level of 4.2 grams/mile");
            else
                printf("Emissions exceed permitted level of 4.2 grams/mile");
        }
        else
        {
            printf("Invalid odometer reading");
        }
    }

    break;
    case 2:
    {
        if (odometer_reading <= 50000 && odometer_reading > 0)
        {
            if (grams_per_mile <= 0.31)
                printf("Emissions within the permitted level of 0.31 grams/mile");
            else
                printf("Emissions exceed permitted level of 0.31 grams/mile");
        }
        else if (odometer_reading > 50000)
        {
            if (grams_per_mile <= 0.39)
                printf("Emissions within the permitted level of 0.39 grams/mile");
            else
                printf("Emissions exceed permitted level of 0.39 grams/mile");
        }
        else
        {
            printf("Invalid odometer reading");
        }
    }
    break;
    case 3:
    {
        if (odometer_reading <= 50000 && odometer_reading > 0)
        {
            if (grams_per_mile <= 0.4)
                printf("Emissions within the permitted level of 0.4 grams/mile");
            else
                printf("Emissions exceed permitted level of 0.4 grams/mile");
        }
        else if (odometer_reading > 50000)
        {
            if (grams_per_mile <= 0.5)
                printf("Emissions within the permitted level of 0.5 grams/mile");
            else
                printf("Emissions exceed permitted level of 0.5 grams/mile");
        }
        else
        {
            printf("Invalid odometer reading");
        }
    }
    break;
    case 4:
    {
        if (odometer_reading <= 50000 && odometer_reading > 0)
        {
            if (grams_per_mile <= 0.25)
                printf("Emissions within the permitted level of 0.25 grams/mile");
            else
                printf("Emissions exceed permitted level of 0.25 grams/mile");
        }
        else if (odometer_reading > 50000)
        {
            if (grams_per_mile <= 0.31)
                printf("Emissions within the permitted level of 0.31 grams/mile");
            else
                printf("Emissions exceed permitted level of 0.31 grams/mile");
        }
        else
        {
            printf("Invalid odometer reading");
        }
    }
    break;

    default:
        printf("Invalid pollutant number");
        break;
    }

    return 0;
}