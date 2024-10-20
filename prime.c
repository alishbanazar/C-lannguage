#include <stdio.h>
#include <stdio.h>
int main() {
    int n, count = 0, i = 1;  // Initialize i to 1
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop through all numbers from 1 to n
    while (i <= n) {
        if (n % i == 0) {
            count++;  // Count how many times n is divisible
        }
        i++;  // Increment i
    }

    // A prime number has exactly 2 divisors (1 and itself)
    if (count == 2) {
        printf("Prime number\n");
    } else {
        printf("Not a prime number\n");
    }

    return 0;
}

