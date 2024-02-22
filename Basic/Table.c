#include <stdio.h>
int main()
{
    int n, i, sum;
    printf("Enter the number which table you want to print : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        sum = n * i;
        printf("%d *%d=%d \n", n, i, sum);
    }
    return 0;
}