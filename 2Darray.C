#include <stdio.h>


void get_poly(double coeff[], int *degree) {
    int i;


    printf("Enter the degree of the polynomial (0 to 8): ");
    scanf("%d", degree);

    
    if (*degree < 0 || *degree > 8) {
        printf("Invalid degree. Please enter a degree between 0 and 8.\n");
        return;
    }

    
    for (i = 0; i <= *degree; i++) {
        printf("Enter coefficient a[%d]: ", i);
        scanf("%lf", &coeff[i]);
    }
}


double eval_poly(double coeff[], int degree, double x) {
    double result = 0.0;
    int i;

    
    for (i = degree; i >= 0; i--) {
        result = result * x + coeff[i];
    }

    return result;
}

int main() {
    double coeff[9];  
    int degree;       
    double x;         
    double result;    

    
    get_poly(coeff, &degree);

    
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    
    result = eval_poly(coeff, degree, x);

    
    printf("The value of the polynomial at x = %.2f is: %.2f\n", x, result);

    return 0;
}
