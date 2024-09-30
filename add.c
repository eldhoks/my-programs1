#include <stdio.h>

int main() {
    // Declare variables to hold the numbers
    float num1, num2, sum;

    // Ask the user to input two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Add the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);

    return 0;
}
