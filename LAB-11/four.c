#include <stdio.h>
int main()
{
    int i, j;
    char input, number = '1';
    printf("Enter the number you want to print in last row: ");
    scanf("%c",&input);
    for(i=1; i <= (input-'1'+1); ++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c", number);
        }
        ++number;
        printf("\n");
    }
    return 0;
}