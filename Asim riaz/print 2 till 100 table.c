//print 2 to 100 table
#include <stdio.h>

int main() {
    int i, j, start;

    // Loop for each block of 10 tables, starting from 2 to 100
    for (start = 2; start <= 100; start += 10) {
        // Loop through the rows (1 to 10 for multiplication results)
        for (i = 1; i <= 10; i++) {
            
            // Loop for each table in the current block (start to start + 9)
            for (j = start; j < start + 10; j++) {
                printf("%d x %d = %2d\t", j, i, j * i);  // Print tables in a row, with proper formatting
            }
            
            printf("\n");  // Move to the next line after printing one row of 10 tables
        }

        printf("\n");  // Extra line between blocks of 10 tables (for readability)
    }

    return 0;
}

