#include <stdio.h>

int main() {
   double speed;
   double distance;// Write C code here
    printf("Enter speed of jet: ");
    scanf("%lf",&speed);
    printf("Enter distance of jet: ");
    scanf("%lf",&distance);
    double speed2 = speed*5/18;
    double t = distance*2/speed2;
    double acc = speed2/t;
    printf(" The acceration is : %.2lf  ",acc);
    

    return 0;
}