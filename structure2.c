#include <stdio.h>

struct book{
    char bname[100];
    double bprice;
    int bpage;
}b1; 

int main(){
    printf("Enter the details\n"); 
    printf("Enter book name: ");
    gets(b1.bname);
    printf("Enter the total pages and price  of the book : ");
    scanf("%d %lf",&b1.bpage,&b1.bprice);
    printf("Display the details : \n");
    printf("Book name: %s\n",b1.bname);
    printf("Book price: %.2lf\n",b1.bprice);
    printf("Book page : %d \n", b1.bpage);
    return 0;
}