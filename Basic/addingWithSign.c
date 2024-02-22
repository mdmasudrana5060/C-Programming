#include <stdio.h>

int main()
{
    int a, b, res;
    char c;

    printf("Enter the value for a: ");
    scanf("%d", &a);

    printf("Enter the value for b: ");
    scanf("%d", &b);

    // Add getchar() to consume the newline character
    // getchar();

    printf("Enter any one operator: ");
    scanf(" %c", &c); // Note the space before %c to skip any whitespace characters

    if (c == '+')
    {
        res = a + b;
        printf("The sum is %d", res);
    }
    else if (c == '-')
    {
        res = a - b;
        printf(" The difference is %d", res);
    }
    else if (c == '*')
    {
        res = a * b;
        printf(" The product is %d", res);
    }
    else if (c == '/')
    {
        // Check for division by zero before performing the division
        if (b != 0)
        {
            res = a / b;
            printf(" The quotient is %d", res);
        }
        else
        {
            printf(" Division by zero is not allowed");
        }
    }
    else
    {
        printf("\nInvalid entry");
    }

    return 0;
}
