#include<stdio.h>
#include<string.h>

int main()
{
    char ch1[100], ch2[100];
    printf("\n Enter string one: ");
    gets(ch1);
    printf("\n Enter string two ");
    gets(ch2);
    printf("\n concatenated string is: %s ",strcat(ch1,ch2));
    
    return 0;
    
}