#include <stdio.h>
void check(int x, int*prime);
int main(){
    int a,b;
    printf("enter two numbers \n");
    scanf("%d",&a);
    check(a,&b);
    if (b==0)
    printf(" %d is a prime number ",a);
    else 
    printf(" %d is not a prime number ",a);
    return 0;
}
void check(int x, int*prime){
    if(x==0 || x==1)
    *prime =1;
   for(int i =2;i<=x/2;i++){
   if(x%i ==0){
      *prime =1 ;
       break;
   }
   }
}
