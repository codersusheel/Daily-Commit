#include <stdio.h>

// Function definition
void printNumbers(int n) {
    int i = 1;
    
    // While loop ka use
    while (i <= n) {
        printf("%d ", i);
        i++; // Increment
    }
    printf("\n");
}

int main() {
    int limit = 5;
    
    // Function call
    printNumbers(limit);
    
    return 0;
}
