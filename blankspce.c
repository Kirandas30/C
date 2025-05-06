#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[100],b[100];
    printf("Enter the  string : ");
    gets(a);
    isspace(a);
    printf("Enter the  string : %s " ,a);
    return 0;
}
void deblank(char str[])
{
    int n = strlen(str);
    char str2[100];
    int j = 0;
    for(int i =0;i<n;i++){
        if(!isspace(str[i])){
            str2[j++] = str[i];
    }
    str2[j] = '\0';
    puts(str2);
}
};