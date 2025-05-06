#include <stdio.h>
#include <math.h>
void calculate_sqrt(int num, double *sqroot);
int main()
{
    printf("Enter a Number: ");
    int num;
    scanf("%d", &num);
    double sqroot;
    calculate_sqrt(num, &sqroot);
    printf("The square root of %d is %.2f", num, sqroot);
    return 0;
}
void calculate_sqrt(int num, double *sqroot)
{
    double LG=1;
    double NG, DIFF;
    do{
        NG= 0.5 * (LG + num/LG);
        DIFF= fabs(NG-LG);
        LG=NG;
    }
    while(fabs(DIFF) >= 0.005);
    *sqroot=NG;
}