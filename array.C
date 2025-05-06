#include <stdio.h>


int main(){
    int a[5];
    printf("Enter the elements of the array\n");

    for(int i =0 ;i<5;i++){
        printf("Enter the value %d",i);
        scanf("%d",&a[i]);
    
    }
    for(int i =0 ;i<5;i++){
        printf("The value of elements",i);
        printf("%d",&a[i]);
    
    }
}