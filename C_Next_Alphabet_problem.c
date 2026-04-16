#include <stdio.h>
int main()
{
    char character;
    scanf("%c", &character);
    if (character == 'z')
    {
        printf("a\n");
    }
    else
    {
        printf("%c\n", character + 1);
    }
    return 0;
}