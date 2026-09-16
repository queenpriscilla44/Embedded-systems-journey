#include <stdio.h>

int main()
{
    int a, b;
    char operator;

    printf("Enter expression: ");
    scanf("%d %c %d", &a, &operator, &b);

    switch (operator)
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
            {
                printf("Result = %d\n", a / b);
            }
            else
            {
                printf("Cannot divide by zero\n");
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
