#include<stdio.h>
int main()
{
    int rows;

    printf("Enter no of rows of pattern you want to print: ");
    scanf("%d", &rows);

    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            printf(" 1 ");
        }
    printf("\n");
    }
    return 0;
}