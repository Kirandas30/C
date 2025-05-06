#include <stdio.h>
#include <math.h>

int main() {
    int x[20],y[20],z[20],n;// Write C code here
    printf("Enter the number of  elements");
    scanf("%d",&n);
    printf("Enter the  elements of x");
    for(int i=0;i<n;i++)
    scanf("%d",&x[i]);
    printf("Enter the  elements of y");
    for(int i=0;i<n;i++)
    scanf("%d",&y[i]);

    for(int i=0;i<n;i++){
    z[i]=x[i]+y[i];
    }
    
    printf("\nx           y              z");
    printf("\n-------------------------------");
    for(int i = 0;i<n;i++)
    printf("\n%d          %d             %d",x[i],y[i],z[i]);
    
    int sum = 0;
    for(int i = 0;i<n;i++)
    sum+=z[i];
    double sqroot = sqrt(sum);
    printf("\nThe sum of z is % d" ,sum);
    printf("\nThe sum of square root of z is % .2lf" ,sqroot);
    
 return 0;
}