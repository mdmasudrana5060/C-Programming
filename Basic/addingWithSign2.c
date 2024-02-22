#include <stdio.h>

int main()

{

    int a, b, res;
    char c;

    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);

    printf("Enter any one operator: ");
    scanf(" %c", &c);

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
        res = a / b;

        printf(" The quotient is %d", res);
    }

    else
    {
        printf(" Invalid entry");
    }

    return 0;
}