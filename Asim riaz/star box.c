//star box
#include <stdio.h>

int main() {
    int i, j;

    // Loop for each row (5 rows total)
    for (i = 1; i <= 5; i++) {
        // Loop for each column in the row (5 columns total)
        for (j = 1; j <= 5; j++) {
            // Print stars for the borders (first and last rows, and first and last columns)
            if (i == 1 || i == 5 || j == 1 || j == 5) {
                printf("*");
            } else {
                printf(" ");  // Print space for the inside of the box
            }
        }
        printf("\n");  // Move to the next line after printing each row
    }

    return 0;
}

