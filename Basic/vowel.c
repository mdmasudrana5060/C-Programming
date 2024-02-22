#include <stdio.h>

int main()
{
    char vowel;
    printf("Enter the characater: ");
    scanf("%c", &vowel);

    if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u')
    {
        printf("\n character is vowel");
    }
    else
    {
        printf("character is consonant");
    }
    return 0;
}