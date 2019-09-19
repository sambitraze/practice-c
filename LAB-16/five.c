#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100], s3[100],i;
    printf("Enter string s1: ");
    scanf("%s",s1);
    for(i = 0; s1[i] != '\0'; ++i)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    strcpy(s3,s1);
    printf("String s2: %s", s2);
    printf("\nString s3: %s", s3);

    return 0;
}