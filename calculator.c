#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return (float)a / b;
}

int main() {
    int num1, num2, choice;
    
    printf("Simple Calculator\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nSelect operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Result: %d + %d = %d\n", num1, num2, add(num1, num2));
            break;
        case 2:
            printf("Result: %d - %d = %d\n", num1, num2, subtract(num1, num2));
            break;
        case 3:
            printf("Result: %d * %d = %d\n", num1, num2, multiply(num1, num2));
            break;
        case 4:
            printf("Result: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}