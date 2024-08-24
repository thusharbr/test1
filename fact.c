#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Check if the input is negative
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial
        for(i = 1; i <= n; ++i) {
            factorial *= i;
        }
        // Output the result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
