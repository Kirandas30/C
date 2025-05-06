#include <stdio.h>
#include <math.h>

int main() {
   double purchase_price;
   double down_pay;
   double annual_intr;
   double total_pay;
    printf("Enter the purchasing price : ");
    scanf("%lf",&purchase_price);
    printf("Enter the down payment amount : ");
    scanf("%lf",&down_pay);
     printf("Enter the annual interest rate : ");
    scanf("%lf",&annual_intr);
     printf("Enter the total number payment : ");
    scanf("%lf",&total_pay);
    double principle = purchase_price - down_pay; 
    double i = (annual_intr/100)/12;
    double mon_pay = (i*principle)/(1-pow(1+i,-total_pay));
    
    printf(" borrow : %.2lf  ",principle);
    printf(" mon pay : %.2lf  ",mon_pay);
    

    return 0;
}