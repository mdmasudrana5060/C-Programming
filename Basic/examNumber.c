#include <stdio.h>
int main()
{
    int i;
    int ft_marks[] = {
        76, 94, 58, 83, 65, 71, 89, 50, 97,
        55, 68, 82, 91, 75, 62, 99, 54, 87,
        79, 59, 92, 73, 88, 61, 78, 56, 98,
        74, 51, 86, 67, 95, 60, 80, 66, 93,
        69, 85, 53, 84};
    int marks_count[101];
    for (i = 0; i < 101; i++)
    {
        marks_count[i] = 0;
    }
    for (i = 0; i < 40; i++)
    {
        marks_count[ft_marks[i]]++;
    }
    for (i = 50; i <= 100; i++)
    {
        printf("Marks: %d Count:%d\n", i, marks_count[i]);
    };
    return 0;
}