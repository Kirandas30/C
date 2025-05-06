#include <stdio.h>
struct book{
    char bname[100];
    int bpage;
    double bprice;
};
struct person {
    char pname [100];
    int age;
    struct book b1;
};
int main(){
    struct  person p1;
    printf("Enter the details\n");
    printf("Enter the person name : \n ");
    fgets(p1.pname,sizeof p1.pname , stdin);
    printf("Enter the person's book name : \n ");
    fgets(p1.b1.bname,sizeof p1.b1.bname , stdin);
    printf("Enter the persons age , total pages and price : \n ");
    scanf("%d%d%lf",&p1.age,&p1.b1.bpage,&p1.b1.bprice );
    printf("Displaying the details => \n ");
    printf("Person name : %s\n  Person age : %d\n Book name : %s\n no of pages of book :%d\n price of book: %lf\n ",p1.pname , p1.age,p1.b1.bname,p1.b1.bpage,p1.b1.bprice);
    return 0;
}