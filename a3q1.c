#include <stdio.h>
#include <math.h>


double standard_deviation(double sum_squares, double avg, int n);

int main() {
    int n, value, smallest, largest;
    int sum = 0, sum_squares = 0;
    double avg;

    
    printf("Enter the total number of values: ");
    scanf("%d", &n);

    
    printf("Enter value 1: ");
    scanf("%d", &value);
    smallest = largest = value;
    sum += value;
    sum_squares += value * value;  

    
    for (int i = 2; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &value);

        
        sum += value;
        sum_squares += value * value;

        
        if (value > largest) {
            largest = value;
        }
        if (value < smallest) {
            smallest = value;
        }
    }

    
    avg = sum / n;

    
    double std_dev = standard_deviation(sum_squares, avg, n);

    
    printf("Smallest value: %d\n", smallest);
    printf("Largest value: %d\n", largest);
    printf("Average: %.2f\n", avg);
    printf("Range: %d\n", largest - smallest);
    printf("Standard deviation: %.2f\n", std_dev);

    return 0;
}


double standard_deviation(double sum_squares, double avg, int n) {

    double variance = (sum_squares / n) - (avg * avg);
    
    return sqrt(variance);
}
