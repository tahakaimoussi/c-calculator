#include <stdio.h>
int main(void)
{
    double a;
    double b;
    char op;

    printf("First number: ");
    scanf("%lf", &a);

    printf("Operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Second number: ");
    scanf("%lf", &b);

    switch (op)
    {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Division by zero!\n");
            else
                printf("Result = %.2f\n", a / b);
            break;

        default:
            printf("Unknown operator\n");
    }
printf("Ctrl + C to exit the program. \n");
getchar();
getchar();
    return (0);
}