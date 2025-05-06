#include <stdio.h>

struct book{
    char bname[100];
    int bpage;
    double bprice;
};
int main(){
    struct book b1= {"Programming in c ", 379,119.32};
    struct book *p;//p is a pointer variable to a structurebook
    p=&b1;

printf("name = %s pages= %d price=%lf  \n",b1.bname,b1.bpage,b1.bprice);

//or
    printf("name = %s pages= %d price=%f  \n",p->bname,p->bpage,p->bprice);
  
return 0;
}

