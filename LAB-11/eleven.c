#include<stdio.h>

int main()
{
    int rows;
    printf("Enter no of rows of pattern you want to print: ");
    scanf("%d", &rows);
    for(int i=0;i<rows;i++)
    {
        for(int k=rows-i;k>0;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i+1;j++)
        {
            if(j%2==0)
            printf("0");
            else
            printf("1");
        }
    printf("\n");
    }
    return 0;
}