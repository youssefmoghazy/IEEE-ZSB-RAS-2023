#include <stdio.h>

// Define the enum with arithmetic operations
enum arithmetic_operation {
    ADD = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE = '/',
    BITWISE_AND = '&',
    BITWISE_OR = '|',
    LOGICAL_NOT = '!'
};

// Define the calculator function
float calculate(float operand1, float operand2, enum arithmetic_operation operation) {
    switch (operation) {
        case ADD:
            return operand1 + operand2;
        case SUBTRACT:
            return operand1 - operand2;
        case MULTIPLY:
            return operand1 * operand2;
        case DIVIDE:
            return operand1 / operand2;
        case BITWISE_AND:
            return (int) operand1 & (int) operand2;
        case BITWISE_OR:
            return (int) operand1 | (int) operand2;
        case LOGICAL_NOT:
            return !operand1; // Operand2 is ignored for logical not
        default:
            printf("Invalid operation\n");
            return 0.0;
    }
}

// Main function to get user inputs and call calculator function
int main() {
    float operand1, operand2;
    char operation_char;
    enum arithmetic_operation operation;
    float result;

    // Get user inputs
    printf("Enter first operand: ");
    scanf("%f", &operand1);
    printf("Enter second operand: ");
    scanf("%f", &operand2);
    printf("Enter operation character (+, -, *, /, &, |, !): ");
    scanf(" %c", &operation_char);

    // Convert operation character to corresponding enum value
    operation = (enum arithmetic_operation) operation_char;

    result = calculate(operand1, operand2, operation);

    printf("%-.2f %c %-.2f = %-.2f ",operand1,operation_char, operand2, result);

    return 0;
}
