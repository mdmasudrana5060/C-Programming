#include <stdio.h>
int main()
{
    int a;

    printf("Enter the value for a: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("It is a positive number");
    }
    else if (a < 0)
    {
        printf("It is a negative number");
    }
    else
    {
        printf("It is 0");
    }
    return 0;
}