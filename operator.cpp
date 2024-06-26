#include <stdio.h>

int main() {

    char operator;

    double num1, num2, result;

    // Prompt the user to enter an operator and two numbers

    printf("Enter an operator (+, -, *, /): ");

    scanf(" %c", &operator);

    printf("Enter two numbers: ");

    scanf("%lf %lf", &num1, &num2);

    // Using a switch statement to perform the operation

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

            if (num2 != 0) {

                result = num1 / num2;

            } else {

                printf("Division by zero is not allowed.\n");

                return 1; // Exit the program with an error code

            }

            break;

        default:

            printf("Invalid operator.\n");

            return 1; // Exit the program with an error code

    }

    printf("Result: %.2lf\n", result);

    return 0;

}
