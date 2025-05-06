#include <stdio.h>
struct book
{
    char bname[100];
    int bpage;
    double bprice;
} b1,b2;
int main()
{
    printf("Enter the details of the book\n");
    printf("Enter the name of the book:");
    gets(b1.bname);
    printf("Enter the no. of pages and price of the book:");
    scanf("%d%lf", &b1.bpage, &b1.bprice);
    printf("The  name of the book is %s.\n", b1.bname);
    printf("The  pages of the book is %d.\n", b1.bpage);
    printf("The  price of the book is %lf.\n", b1.bprice);
    b2=b1;
    if(strcmp(b1.bname, b2.bname)==0)
    printf("The name of the books are same\n");
    else
    printf("The name of the books are not same\n");
    if((b1.bpage==b2.bpage) && (b1.bprice==b2.bprice))
    printf("The pages and price of the books are same");
    else
    printf("The pages and price of the books are not same");
    return 0;
}














































