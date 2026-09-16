#include <stdio.h>

int main()
{
    int number;
    int reverse = 0;
    int digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    printf("Reverse = %d\n", reverse);

    return 0;
}
