                                                                       #include <stdio.h>

struct book{
    char bname[100];
    double bprice;
    int bpage;
}; // } b1 = {"Programming in c" ,356,119.87}; // alternative of structure initialisation
int main(){
    struct book b1 = {"Programming in c" ,119.87,356};// structure initialisation
    printf("Size for the name of the book is %s.\n",b1.bname);//sizeof(b1.bname) for size of structure element and the structure it self 
    printf("Size for the price of the book is %lf.\n",b1.bprice);//sizeof(b1.bprice) for size of structure element and the structure it self 
    printf("Size for the total pages of the book is %d.\n",b1.bpage);//sizeof(b1.bpage) for size of structure element and the structure it self 
    return 0;
}

