#include <stdio.h>

int main() {
    int n, i, j, is_prime;
    int sum = 0;
    printf("Enter n value: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        is_prime = 1;  // Assume i is prime until proven otherwise
        
        // Check if i is divisible by any number between 2 and i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0;  // Not prime if divisible
                break;
            }
        }

        // If i is prime, add it to sum and print it
        if (is_prime) {
            printf("%d ", i);  // Print the prime number
            sum += i;          // Add to sum
        }
    }
    
    printf("\nSum of primes: %d\n", sum);  // Print the sum of primes
    return 0;
}
