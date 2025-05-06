#include <stdio.h>
#define G 9.80

int main() {
  double height;
  double flow;
  double mass,work, power,e_energy;// Write C code here
    printf("Enter the height : ");
    scanf("%lf",&height);
    printf("Enter the flow : ");
    scanf("%lf" ,&flow);
    mass = flow*1000;
    work = mass*G*height;
    power = (90*work)/100;
    e_energy = power*1000000 ;
    printf("%lf",e_energy);
    

    return 0;
}