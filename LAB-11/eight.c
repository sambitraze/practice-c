#include <stdio.h>
int main()
{
    int i, j, rows;
    char k = 'A';
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}