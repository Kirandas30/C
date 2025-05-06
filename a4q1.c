#include <stdio.h>

void no_of_bills(int num ,int *fifty , int *twenty, int *ten);

int main(){
    int num, fif, twe,ten ;

    printf("Enter a amount");
    scanf("%d",&num);
    no_of_bills(num,&fif,&twe,&ten);
    printf("The number of 50's : %d \n",fif);
    printf("The number of 20's : %d \n",twe);
    printf("The number of 10's : %d \n",ten);
return 0;
}
void no_of_bills(int num ,int *fifty , int *twenty, int *ten){
    *fifty = num/50;
    num = num%50;
    *twenty = num/20;
    num = num%20;
    *ten = num/10;
    num = num%10;
}


