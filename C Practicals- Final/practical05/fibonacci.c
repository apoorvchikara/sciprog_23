#include <stdio.h>
#include <stdlib.h>

// Function declaration/prototype
// Input arguments: Fn-1 and Fn-2
// On exit: Fn and Fn-1
void fibonacci(int *a, int *b);

int main() {
    int n, i;
    int f0 = 0, f1 = 1;

    // user input to enter a positive integer
    printf("Enter a positive integer\n");
    scanf("%d", &n);
    
    // Check if the entered number is positive
    if (n < 1) {
        printf("The number is not positive.\n");
        exit(1);
    }

    // Print the first two numbers in the Fibonacci sequence
    printf("The Fibonacci sequence is: \n");
    printf("%d, %d, ", f0, f1);

    /// Calculate and print the Fibonacci sequence from the 3rd no.
    for (i = 2; i < n; i++) {
        fibonacci(&f1, &f0);
        printf("%d, ", f1);

    // Print a newline every 10 numbers for better readability
        if ((i + 1) % 10 == 0){
            printf("\n");
        }
    }

    return 0;
}

// Function to calculate the next Fibonacci number
void fibonacci(int *a, int *b) {
    int next;
    next = *a + *b;
    *b = *a;
    *a = next;
}
