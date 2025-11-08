#include <stdio.h>

int main() {
    int n, digit, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;  // Extract last digit
        if (digit % 2 != 0) {  // Check if odd
            product *= digit;
            hasOdd = 1;        // Mark that at least one odd digit exists
        }
        n /= 10;  // Remove last digit
    }

    // If no odd digit was found, product should be 1
    printf("%d", product);

    return 0;
}
