#include <stdio.h>


double fast_food_billions(int year) {
    
    int t = year - 2005;
    
    return 33.2 + 16.8 * t;
}

int main() {
    int year;
    
    
    while (1) {
        
        printf("Enter a year after 2005 (or a year before 2005 to quit): ");
        scanf("%d", &year);


        if (year < 2005) {
            printf("Exiting the program.\n");
            break;
        }

        
        double prediction = fast_food_billions(year);

        
        printf("In the year %d, U.S. consumers are predicted to spend $%.2lf billion on fast food.\n", year, prediction);
    }

    return 0;
}
