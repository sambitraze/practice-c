#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i;
    printf("Enter a string: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; ++i);
    printf("Length of string: %d", i);

    printf("\nLength using function: %d", strlen(s));
    return 0;
}