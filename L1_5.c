#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result;

    switch (oper_type) {
        case 1:
            // Set 1st bit
            result = num | (1 << 0);
            break;
        case 2:
            // Clear 31st bit
            result = num & ~(1 << 31);
            break;
        case 3:
            // Toggle 16th bit
            result = num ^ (1 << 15);
            break;
        default:
            printf("Error: Invalid operation type\n");
            return num;  // Return the original number if the operation type is invalid
    }

    return result;
}

int main() {
    int num, oper_type;
    int result;

    // Read the integer and operation type
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    // Perform the bit operations
    result = bit_operations(num, oper_type);

    // Print the modified result
    printf("Modified result: %d\n", result);

    return 0;
}
