#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter first string");
    gets(a);
    
    strncpy(b,&a[1],3);
    printf("The first string in array source is %s \n and the second string in array dup is %s ",a,b);
return 0;
}