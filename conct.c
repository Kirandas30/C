#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter the  string : ");
    gets(a);
     printf("Enter the  string : ");
    gets(b);
    strcat(a,b);
    printf("The new text is \n %s ",a,b);
    return 0;
}