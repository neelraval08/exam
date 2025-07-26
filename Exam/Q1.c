#include <stdio.h>

int main() {
    char operation;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operation) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}
