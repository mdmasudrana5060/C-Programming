#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is negative");
    }
    return 0;
}