#include <stdio.h>

// Recursive function definition
int f(int x) {
    if (x <= 0) {
        return 0;  // Base case: if x <= 0, return 0
    } else {
        return f(x - 1) + 2;  // Recursive case: f(x) = f(x - 1) + 2
    }
}

int main() {
    int n, x;
    
    // Prompt user for the number of sets
    printf("Enter the number of sets: ");
    scanf("%d", &n);
    
    // Loop over each set
    for (int i = 0; i < n; i++) {
        // Prompt user for the value of x for the current set
        printf("Enter a number x for set %d: ", i + 1);
        scanf("%d", &x);
        
        // Call the recursive function and display the result for the current set
        printf("f(%d) = %d\n", x, f(x));
    }

    return 0;
}
