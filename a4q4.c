#include <stdio.h>
#include <math.h>
void drag_force(double CD, double A,double V, double *DF);
int main()
{
    double CD, A, DF;
    printf("Enter the drag coefficient (CD) and  e projected area :");
    scanf("%lf %lf",&CD,&A);
    double V=40;
    while(V>=0)
    {
        drag_force(CD, A, V, &DF);
        V=V/5;

    }
    drag_force(CD, A, V, &DF);
    printf("Drag force is %.2f", DF);
    return 0;

}
void drag_force(double CD, double A, double V, double *DF)
{
    double R=1.23;
    *DF= 0.5*CD *A*R* pow(V,2);
}