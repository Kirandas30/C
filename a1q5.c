#include <stdio.h>
void display();
double cal_acc(double vf,double vi,double t);

int main() {
    display();
    double Vf,Vi,T;
    scanf("%lf%lf%lf",&Vf,&Vi,&T);
    double t= T/60.0;
    double a= cal_acc(Vf,Vi,t);
    double time_taken= ((0-Vi)/a)*60;
    printf("Acceleration a= %.2f mi/sq. hr time taken to come to rest= %.2f minutes", a, time_taken);
    
  return 0;
}
void display()
{
    printf("Enter the values of final,intial velocity in mi/hr, time in min: ");
}
double cal_acc(double vf, double vi, double t)
{
    double a=(vf-vi)/t;
    return a;
}
