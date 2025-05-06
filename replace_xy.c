#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    
    printf("Enter a string: ");
    gets(a);
    int n =strlen(a)-2;
   // strncpy(&a[n],"xy",2);//for replace
    //puts(a);
     strncpy(a,&a[n],2);  //for copy
      puts(a);
   return 0;
}