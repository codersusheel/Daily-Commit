#include <stdio.h>

int main() {
    int i, j;
    int rows = 20;

    // Outer loop lines control karne ke liye
    for (i = rows; i >= 1; i--) {
        
        // Inner loop har line mein stars print karne ke liye
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Har line ke baad niche jaane ke liye
        printf("\n");
    }

    return 0;
}
