#include <stdio.h>

struct person{
    char pname[100];
    int date,  year;
    char month[100];
    double salary;
}; 
int main(){
    struct person b1;
     printf("Enter name of the person : ");
    gets(b1.pname);
    
    printf("Enter the date of joining : ");
    scanf(" %d",&b1.date);
     printf("Enter the month of joining : ");
    fgets(b1.month,sizeof b1.month,stdin);
     printf("Enter the year of joining : ");
    scanf(" %d",&b1.year);

     printf("Enter the salary of the person : ");
     scanf("%lf",&b1.salary);
 
 printf("Display the details : \n");
    printf("Person name: %s\n",b1.pname);
    printf("Person DOB: %d %s %d \n",b1.date,b1.month,b1.year);
    printf("Person salary : %.2lf \n", b1.salary);
    return 0;
}