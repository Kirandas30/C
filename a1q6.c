#include <stdio.h>

double celsius_at_depth(double depth) {
    return (10 * depth) + 20;  
}


double fahrenheit(double celsius) {
    return (1.8 * celsius) + 32;  
}

int main() {
    double depth, celsius_temp, fahrenheit_temp;

    
    printf("Enter the depth inside the Earth (in kilometers): ");
    scanf("%lf", &depth);

    
    celsius_temp = celsius_at_depth(depth);

    
    fahrenheit_temp = fahrenheit(celsius_temp);

    
    printf("At a depth of %.2lf kilometers:\n", depth);
    printf("Temperature in Celsius: %.2lf °C\n", celsius_temp);
    printf("Temperature in Fahrenheit: %.2lf °F\n", fahrenheit_temp);

    return 0;
}
