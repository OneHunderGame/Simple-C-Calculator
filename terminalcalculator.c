#include <stdio.h>
#include <math.h>

int main() {

     //simple interest calculator

     char operator = '\0';
        double num1 = 0.0;
        double num2 = 0.0;
        double result = 0.0;

        printf("Enter the first number: ");
        scanf("%lf", &num1);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator); // clear \n from input buffer

        printf("Enter the second number: ");
        scanf("%lf", &num2);

        switch (operator)
        {
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
                printf("<you cant divide by zero>.\n");
                return 1;
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
            printf("Please use one of the following operators: +, -, *, /\n");
            return 1;
        }

        printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);


        return 0;
}
