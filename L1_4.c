#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    float result;

    // For Reading the first number
    printf("Please enter first number: ");
    scanf("%f", &num1);

    //For Printing the operator
    printf("Please enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // For reading the second number
    printf("Please enter second number: ");
    scanf("%f", &num2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the second number is zero to avoid division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }

    // Print the result
    printf("Result: %.2f\n", result);

    return 0;
}
