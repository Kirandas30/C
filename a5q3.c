#include <stdio.h>
#include <string.h>

void deblank(char *output, const char *input) {
    int j = 0;
    
    
    for (int i = 0; i < strlen(input); i++) {
    
        if (input[i] != ' ') {
            output[j] = input[i];
            j++;
        }
    }
    
    
    output[j] = '\0';
}

int main() {
    char input[100];  
    char output[100]; 
    
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);  

    
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
    
    
    deblank(output, input);
    

    printf("Original String: '%s'\n", input);
    printf("String with blanks removed: '%s'\n", output);
    
    return 0;
}
