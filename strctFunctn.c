#include <stdio.h>
   


   struct book{//structure defination
    char book[100];
    int bpage;
    double bprice;
   };
   struct book b1;//structure variable 
   struct book  scan_book();//it is the input function prototype here struct book is return type
   void print_book(struct book b1);//it is the output function prototype

   int main(){
    b1 = scan_book();
    print_book(b1);
    return 0;
   }
   struct book scan_book(){//input function definition
   printf("Enter the book details => \n ");
   printf("Enter book name: \n");
   scanf("%s",b1.book);
   printf("Enter total book pages: \n");
   scanf("%d",&b1.bpage);
   printf("Enter book price: \n");
   scanf("%lf",&b1.bprice);
   return b1;
   }
   void print_book (struct book b1){
    printf("The book name is : %s \n Total book pages: %d \n Book price: %lf \n ",b1.book,b1.bpage, b1.bprice);
   }