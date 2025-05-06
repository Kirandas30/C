#include <stdio.h>
#include <string.h>

int main(){
    char text[100];
    int len;
    printf("Enter a string: ");
    gets(text);
    len = strlen(text);
    printf("The no of characters present in input string (without the  null character )%s is %d", text,len);//if there is with null char then  len+1
    return 0;
}  