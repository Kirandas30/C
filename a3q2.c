#include <stdio.h>

#define OVERTIME_RATE 1.5       
#define REGULAR_HOURS 40        
#define TAX_RATE 0.03625        

int main() {
    int numEmployees;

    
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    if (numEmployees <= 0) {        
        printf("The number of employees must be greater than 0.\n");
        return 1;
    }

    double totalPayroll = 0.0;  
    double totalNetPay = 0.0;   

    
    for (int i = 1; i <= numEmployees; i++) {
        int empID;
        double hourlyWage, hoursWorked, grossPay, netPay, taxDeducted;

        
        printf("\nEnter details for Employee %d:\n", i);
        printf("Employee ID: ");
        scanf("%d", &empID);
        printf("Hourly wage: ");
        scanf("%lf", &hourlyWage);
        printf("Hours worked this week: ");
        scanf("%lf", &hoursWorked);

        
        if (hoursWorked > REGULAR_HOURS) {
            
            double overtimeHours = hoursWorked - REGULAR_HOURS;
            grossPay = (REGULAR_HOURS * hourlyWage) + (overtimeHours * hourlyWage * OVERTIME_RATE);
        } else {
            
            grossPay = hoursWorked * hourlyWage;
        }

        
        taxDeducted = grossPay * TAX_RATE;

        
        netPay = grossPay - taxDeducted;

        
        totalPayroll += grossPay;
        totalNetPay += netPay;

        
        printf("\nEmployee ID: %d\n", empID);
        printf("Gross pay: $%.2lf\n", grossPay);
        printf("Tax deducted: $%.2lf\n", taxDeducted);
        printf("Net pay: $%.2lf\n", netPay);
    }

    

    
    printf("\nTotal payroll: $%.2lf\n", totalPayroll);
    printf("Average net pay: $%.2lf\n", totalNetPay / numEmployees);

    return 0;
}
